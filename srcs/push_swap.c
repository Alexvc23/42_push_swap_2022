/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:41:23 by jvalenci          #+#    #+#             */
/*   Updated: 2022/02/11 19:19:23 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_print_int(int args, int *num)
{
    int i;

    i = 0;
    while (i <= (args - 2))
        printf("%d ", num[i++]);
    printf("\n");
}
void ft_free(int *a)
{
    if (a)
    {
        free(a);
        a = NULL;
    }
}

/* check if arguments provided are only numbers */
unsigned int ft_check_isdigit(int args, char *argv[])
{
    int i;
    int j;

    i = 1;
    while (i < args)
    {
        j = 0;
        while (argv[i][j])
        {
            if (argv[i][j] == '-' && argv[i][j + 1])
            {
                if (!ft_isdigit(argv[i][j + 1]))
                    return (0);
                j += 2;
            }
            else
            {
                if (!ft_isdigit(argv[i][j]))
                    return (0);
                j++;
            }
        }
        i++;
    }
    return (1);
}

/* Transforme characters into ingeters and check int overflow */
int ft_check_numsize(int args, char *argv[], int *num)
{
    int i;
    int iter;

    i = 1;
    iter = 0;
    while (i < args)
    {
        num[iter] = ft_atoi(argv[i]);
        if (num[iter] == 0)
        {
            if ((char)(num[iter] + '0') != argv[i][0])
            {
                ft_putstr_fd("Error\n", 2);
                return (0);
            }
        }
        i++;
        iter++;
    }
    return (1);
}

/* Checks if there are not any duplicates */
int ft_check_dup(int args, int *num)
{
    int i;
    int j;

    i = 0;
    while (i < (args - 2))
    {
        j = (i + 1);
        while (j < (args - 1))
        {
            if (num[i] == num[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int main(int args, char *argv[])
{
    int *num;
    t_list *stack_a;
    t_list *stack_b;

    stack_a = NULL;
    stack_b = NULL;
    num = NULL;
    num = malloc(((args - 1) * sizeof(int)));
    if (!num)
        return (write(2, "Error\n", 7));
    if (args >= 3)
    {
        if (!ft_check_isdigit(args, argv))
            return (write(2, "Error\n", 7));
        if (!ft_check_numsize(args, argv, num))
            return (0);
        if (!ft_check_dup(args, num))
            return (write(2, "Error\n", 7));
        set_up(args, num, &stack_a, &stack_b);
    }
    ft_free(num);
    return (0);
}
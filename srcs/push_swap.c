/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:41:23 by jvalenci          #+#    #+#             */
/*   Updated: 2022/03/03 11:18:38 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* free new int array, free linked list and print error if error*/
int ft_error(int *num, t_list **a)
{
	free(num);
	ft_lstclear(a, del);
	return (write(2, "Error\n", 7));
}

/* check if arguments provided are only numbers */
unsigned int	ft_check_isdigit(int args, char *argv[])
{
	int	i;
	int	j;

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
int	ft_check_numsize(int args, char *argv[], int *num)
{
	int	i;
	int	iter;

	i = 1;
	iter = 0;
	while (i < args)
	{
		num[iter] = ft_atoi(argv[i]);
		if (num[iter] == 0)
		{
			if (argv[i][0] == '-' && (char)(num[iter] + '0') == argv[i][1])
			{
				i++;
				iter++;
				continue ;
			}
			if ((char)(num[iter] + '0') != argv[i][0])
				return (0);
		}
		i++;
		iter++;
	}
	return (1);
}

/* Checks if there are not any duplicates */
int	ft_check_dup(int args, int *num)
{
	int	i;
	int	j;

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

int	main(int args, char *argv[])
{
	int		*num;
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	num = NULL;
	num = malloc(((args - 1) * sizeof(int)));
	if (!num)
		return (write(2, "Error\n", 7));
	if (args >= 3)
	{
		if (!ft_check_isdigit(args, argv))
			return (ft_error(num, &stack_a));
		if (!ft_check_numsize(args, argv, num))
			return (ft_error(num, &stack_a));
		if (!ft_check_dup(args, num))
			return (ft_error(num, &stack_a));
		set_up(args, num, &stack_a, &stack_b);
	}
	free(num);
	ft_lstclear(&stack_a, del);
	return (0);
}
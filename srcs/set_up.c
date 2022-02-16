/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_up.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:53:59 by jvalenci          #+#    #+#             */
/*   Updated: 2022/02/16 14:06:25 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int ft_index(t_list **stack, int num)
{
    int counter;
    t_list  *temp;

    counter = 0;
    temp = *stack;
    while (temp)
    {
        if (*((int *)temp->content) == num)
            return (counter);
        counter++;
        temp = temp->next;
    }
    return (-1);
}

int ft_min(t_list **stack)
{
    int     min;
    t_list  *temp;

    min = INT_MAX;
    temp = *stack;
    if (!*stack)
    {
        ft_putstr_fd("error in ft_min\n", 1);
        return (-1);
    }
    while (temp)
    {
        if (*((int *)temp->content) < min)
            min = *((int *)temp->content);
        temp = temp->next;
    }
    return (min);
}

int ft_max(t_list **stack)
{
    t_list  *temp;
    int     max;

    if (!*stack)
    {
        ft_putstr_fd("error in ft_max\n", 1);
        return (-1);
    }
    temp = *stack;
    max = 0;
    while (temp)
    {
        if (*((int*)temp->content) > max)
            max = *((int*)temp->content);
        temp = temp->next;
    }
    return (max);
}


int ft_before_max(t_list **stack, int gts)
{
    t_list  *temp;
    int     max;

    if (!*stack)
    {
        ft_putstr_fd("error in ft_before_max\n", 1);
        return (-1);
    }
    temp = *stack;
    max = 0;
    while (temp)
    {
        if (*((int*)temp->content) > max && *((int*)temp->content) < gts)
            max = *((int*)temp->content);
        temp = temp->next;
    }
    return (max);
}

int set_up(int args, int *num, t_list **stack_a , t_list **stack_b)
{
    int i;

    i = 0;
    while (i <= (args - 2))
        ft_lstadd_back(stack_a, ft_lstnew(&num[i++]));
    if (ft_issort(args, num))
        return (0);
    if (args == 4)
        ft_three_nbrs(stack_a);
    if (args == 6)
        ft_five_nbrs(stack_a, stack_b);
    return (0);
}
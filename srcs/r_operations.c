/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_operations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:21:45 by jvalenci          #+#    #+#             */
/*   Updated: 2022/02/15 15:36:48 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* top node in stack_a pass to  botton */
void ft_ra(t_list **stack_a, char letter)
{
    t_list  *temp;
    t_list  *last;
    t_list  *second; 

    temp = *stack_a;
    last = ft_lstlast(*stack_a);
    second = temp->next;
    second->previous = NULL;
    last->next = temp;
    temp->previous = last;
    temp->next = NULL;
    *stack_a = second;
    ft_check_prev(stack_a);
     if (letter == 'a')
        ft_putstr_fd("ra\n", 1);
    else
        ft_putstr_fd("rb\n", 1);
}

/* top node in stack_b pass to be in the botton */
void ft_rb(t_list **stack_b, char letter)
{
    ft_ra(stack_b, letter);
}

/* top nod in both stacks pass to be in the botton */
void ft_rr(t_list **stack_a, t_list **stack_b)
{
    ft_ra(stack_a, 'a');
    ft_rb(stack_b, 'b');
}
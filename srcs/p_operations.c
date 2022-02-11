/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_operations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:31:58 by jvalenci          #+#    #+#             */
/*   Updated: 2022/02/11 22:03:59 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void    ft_pa(t_list **stack_b, t_list **stack_a)
{
    t_list *temp_b;
    t_list *temp_a;
    if (!*stack_b)
        return ;
    temp_b = *stack_b;
    temp_a = *stack_a;
    if (!temp_a)
    {
       *stack_b = temp_b->next; 
        temp_b->next->previous = NULL;
        temp_b->next = NULL;
        *stack_a = temp_b;
        return ;
    }
    *stack_b = temp_b->next;
    temp_b->previous = NULL;
    temp_b->next = temp_a;
    temp_a->previous = temp_b;
    *stack_a = temp_b; 
}

void    ft_pb(t_list **stack_a, t_list **stack_b)
{
    if (!stack_a)
        return;
    ft_pa(stack_a, stack_b);
}
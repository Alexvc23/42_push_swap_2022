/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:58:47 by jvalenci          #+#    #+#             */
/*   Updated: 2022/02/11 15:12:34 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

/* botton node pass to the top */
void ft_rra(t_list **stack_a)
 {
     t_list *head;
     t_list *last;
     t_list *b_last;

     head = *stack_a;
     last = ft_lstlast(*stack_a);
     last->next = head->next;
     b_last = last->previous;
     b_last->next = head;
     last->previous = NULL;
     head->next = NULL;
     *stack_a = last;
     ft_check_prev(stack_a);
 }
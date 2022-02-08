/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_operations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:30:22 by jvalenci          #+#    #+#             */
/*   Updated: 2022/02/08 15:19:39 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void    ft_sa(t_list **a_stack)
{
    t_list **temp;
    t_list *last;

    last = ft_lstlast(a_stack);
    a_stack = &(*a_stack->next);
    a_stack = a_stack->next; 
    a_stack->next = NULL;
    last = a_stack;
}
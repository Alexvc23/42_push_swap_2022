/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:58:47 by jvalenci          #+#    #+#             */
/*   Updated: 2022/02/23 10:39:32 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

/* botton node pass to the top */
void	ft_rra(t_list **stack_a, char letter)
{
	t_list	*head;
	t_list	*last;

	head = *stack_a;
	last = ft_lstlast(*stack_a);
	head->previous = last;
	last->previous->next = NULL;
	last->next = head;
	last->previous = NULL;
	*stack_a = last;
	ft_check_prev(stack_a);
	if (letter == 'a')
		ft_putstr_fd("rra\n", 1);
	else
		ft_putstr_fd("rrb\n", 1);
}

void	ft_rrb(t_list **stack_b, char letter)
{
	ft_rra(stack_b, letter);
}

void	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	ft_rra(stack_a, 'a');
	ft_rrb(stack_b, 'b');
}

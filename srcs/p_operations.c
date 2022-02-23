/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_operations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:31:58 by jvalenci          #+#    #+#             */
/*   Updated: 2022/02/23 10:25:59 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_pa(t_list **stack_b, t_list **stack_a, char letter)
{
	t_list	*temp_b;
	t_list	*temp_a;

	temp_b = *stack_b;
	temp_a = *stack_a;
	if (!*stack_b)
		return ;
	if (letter == 'a')
		ft_putstr_fd("pa\n", 1);
	else
		ft_putstr_fd("pb\n", 1);
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

void	ft_pb(t_list **stack_a, t_list **stack_b, char letter)
{
	if (!stack_a)
		return ;
	ft_pa(stack_a, stack_b, letter);
}

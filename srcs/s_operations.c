/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_operations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:03:10 by jvalenci          #+#    #+#             */
/*   Updated: 2022/02/23 10:28:30 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

/* top node pass to botton */
void	ft_sa(t_list **stack_a, char letter)
{
	t_list	*new_head;
	t_list	*second_node;

	second_node = *stack_a;
	new_head = second_node->next;
	new_head->previous = NULL;
	second_node->next = new_head->next;
	second_node->previous = new_head;
	new_head->next = second_node;
	*stack_a = new_head;
	ft_check_prev(stack_a);
	if (letter == 'a')
		ft_putstr_fd("sa\n", 1);
	else
		ft_putstr_fd("sb\n", 1);
}

void	ft_sb(t_list **stack_b, char letter)
{
	ft_sa(stack_b, letter);
}

void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	ft_sa(stack_a, 'a');
	ft_sb(stack_b, 'b');
}

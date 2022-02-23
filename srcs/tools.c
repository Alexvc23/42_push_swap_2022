/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   issort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:22:23 by jvalenci          #+#    #+#             */
/*   Updated: 2022/02/23 10:45:31 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	ft_min_if_null(t_list **stack)
{
	t_list	*temp;
	int		min;

	if (!*stack)
	{
		ft_putstr_fd("error in ft_min_is_null\n", 1);
		return (-1);
	}
	temp = *stack;
	min = INT_MAX;
	while (temp)
	{
		if (*((int *)temp->content) < min && ((char *)temp->index) == NULL)
			min = *((int *)temp->content);
		temp = temp->next;
	}
	return (min);
}

int	ft_before_min(t_list **stack, int lwst)
{
	int		min;
	t_list	*temp;

	min = INT_MAX;
	temp = *stack;
	if (!*stack)
	{
		ft_putstr_fd("error in ft_min\n", 1);
		return (-1);
	}
	while (temp)
	{
		if (*((int *)temp->content) < min && *((int *)temp->content) > lwst)
			min = *((int *)temp->content);
		temp = temp->next;
	}
	return (min);
}

int	ft_issort(int args, int *num)
{
	int	i;
	int	len;

	i = 0;
	len = (args - 2);
	while (i < len)
	{
		if (num[i] > num[i + 1])
			return (0);
		i++;
	}
	return (1);
}

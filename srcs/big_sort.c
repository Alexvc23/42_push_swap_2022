/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 21:07:13 by jvalenci          #+#    #+#             */
/*   Updated: 2022/03/03 11:16:50 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_setup_index(t_list **a, int *index, int len)
{
	int		i;
	int		min;
	int		counter;
	t_list	*temp;

	counter = 0;
	i = 0;
	while (i++ < len)
	{
		temp = *a;
		min = ft_min_if_null(a);
		while (temp)
		{
			if (*((int *)temp->content) == min && ((char *)temp->index) == NULL)
			{
				index[counter] = counter;
				temp->index = &index[counter];
				counter++;
			}
			temp = temp->next;
		}
	}
}

int	*ft_put_index(t_list **a)
{
	int	*index;
	int	len;

	len = ft_lstsize(*a);
	index = malloc(len * sizeof(int));
	if (!index)
		return (NULL);
	ft_setup_index(a, index, len);
	return (index);
}

void	ft_move_to_a(t_list **a, t_list **b)
{
	int	len;
	int	j;

	len = ft_lstsize(*b);
	j = 0;
	while (j++ < len)
		ft_pa(b, a, 'a');
}

void	ft_radix_sort(t_list **a, t_list **b, int len)
{
	int	i;
	int	j;
	int	max_num;
	int	max_bits;
	int	current_num;

	max_num = len - 1;
	max_bits = 0;
	i = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	while (i < max_bits)
	{
		j = 0;
		while (j++ < len)
		{
			current_num = *(int *)(*a)->index;
			if (((current_num >> i) & 1) == 1)
				ft_ra(a, 'a');
			else
				ft_pb(a, b, 'b');
		}
		ft_move_to_a(a, b);
		i++;
	}
}

void	ft_big_sort(t_list **a, t_list **b)
{
	int	*index;
	int	len;

	index = ft_put_index(a);
	len = ft_lstsize(*a);
	ft_radix_sort(a, b, len);
	free(index);
}
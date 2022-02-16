/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_nbrs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:27:04 by jvalenci          #+#    #+#             */
/*   Updated: 2022/02/16 16:35:23 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void    ft_set_appart(t_list **a, t_list **b)
{
    int     b_index;
    int     index;
    int     i;

    b_index = ft_index(a, ft_before_max(a, ft_max(a)));
    while (ft_lstsize(*a) > 3)
    {
        if (ft_index(a, ft_max(a)) > b_index && ft_lstsize(*a) > 4)
            index = b_index;
        else
            index = ft_index(a, ft_max(a));
        i = 0;
        if (index <= (ft_lstsize(*a) / 2))
        {
            while (i++ < index)
                ft_ra(a, 'a');;
            ft_pb(a, b, 'b');
        }
        else
        {
            while (i++ < (ft_lstsize(*a) - index))
                ft_rra(a, 'a');
            ft_pb(a, b, 'b');
        }
    }
}

void    ft_five_nbrs(t_list **a, t_list **b)
{
    t_list  *temp_b;
    t_list  *temp_a;
    int     len_b;
    int     i;

    ft_set_appart(a, b);
    temp_b = *b;
    i = 0;
    if (temp_b->next)
    {
        if (*((int *)temp_b->content) < *((int *)temp_b->next->content))
            ft_sb(b, 'b');
    }
    ft_three_nbrs(a);
    len_b = ft_lstsize(*b);
    while (i++ < len_b)
        ft_pa(b, a, 'a');
    temp_a = *a;
    while (*((int *)temp_a->content) == ft_max(a) || *((int *)temp_a->content) ==\
    ft_before_max(a, ft_max(a)))
    {
        ft_ra(a, 'a');
        temp_a = *a;
    }
}
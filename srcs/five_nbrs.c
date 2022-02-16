/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_nbrs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:27:04 by jvalenci          #+#    #+#             */
/*   Updated: 2022/02/16 14:05:28 by jvalenci         ###   ########.fr       */
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
    t_list *temp;

    ft_set_appart(a, b);
    temp = *b;
    if (*((int *)temp->content) < *((int *)temp->next->content))
        ft_sb(b, 'b');
    ft_three_nbrs(a);
    ft_pa(b, a, 'a');
    ft_pa(b, a, 'a');
    ft_ra(a, 'a');;
    ft_ra(a, 'a');;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_nbrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:22:24 by jvalenci          #+#    #+#             */
/*   Updated: 2022/02/15 15:30:25 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void ft_three_nbrs(t_list **stack_a)
{
    int one;
    int two;
    int three;
    t_list *temp;

    temp = *stack_a;
    one = *((int*)temp->content);
    two = *((int*)temp->next->content);
    three = *((int*)temp->next->next->content);
    if (one > two && one < three)
        ft_sa(stack_a, 'a');
    if (one > two && one > three && two > three)
    {
        ft_sa(stack_a, 'a');
        ft_rra(stack_a, 'a');
    }
    if (one > two && one > three && two < three)
        ft_ra(stack_a, 'a');
    if (one < two && one < three && two > three)
    {
        ft_sa(stack_a, 'a');
        ft_ra(stack_a, 'a');
    }
    if (one < two && one > three && two > one)
        ft_rra(stack_a, 'a');
}
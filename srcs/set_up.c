/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_up.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:53:59 by jvalenci          #+#    #+#             */
/*   Updated: 2022/02/11 22:10:50 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int set_up(int args, int *num, t_list **stack_a , t_list **stack_b)
{
    int i;

    (void)stack_b;    
    i = 0;
    while (i <= (args - 2))
        ft_lstadd_back(stack_a, ft_lstnew(&num[i++]));
    
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:22:23 by jvalenci          #+#    #+#             */
/*   Updated: 2022/02/06 14:33:08 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int ft_issort(int args, int *num)
{
    int i;
    int len;

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
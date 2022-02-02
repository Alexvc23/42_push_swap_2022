/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:41:23 by jvalenci          #+#    #+#             */
/*   Updated: 2022/02/02 14:03:49 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/push_swap.h"

unsigned int ft_check_num(int args, char *argv[])
{
    int i;
    int j;

    i = 1;
    while (i < args)
    {
        j = 0;
        while (argv[i][j])
        {
            if (!ft_isdigit(argv[i][j]))
                return (0); 
            j++;
        }
        i++;
    }
    return (1);
}

int main(int args, char *argv[])
{
    if (!ft_check_num(args, argv))
        write(3, INTWARNIN, ft_strlen(INTWARNIN));
    return (0);
}
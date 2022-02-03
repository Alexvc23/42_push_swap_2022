/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:41:23 by jvalenci          #+#    #+#             */
/*   Updated: 2022/02/03 14:35:37 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

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
       write(2 , INTWARNIN, ft_strlen(INTWARNIN));
    return (0);
}
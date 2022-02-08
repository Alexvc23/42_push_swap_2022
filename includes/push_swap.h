/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:19:46 by jvalenci          #+#    #+#             */
/*   Updated: 2022/02/08 13:12:32 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include"../libft/includes/libft.h"
#define INTWARNIN "Some arguments aren't integers\n"
#define DUPWARNIN "Some arguments are duplicated\n"

/*
 * ─── FUNCTIONS ──────────────────────────────────────────────────────────────────
 */

unsigned int ft_check_num(int args, char *argv[]);
int set_up(int args, int *num, t_list *stack_a , t_list *stack_b);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:19:46 by jvalenci          #+#    #+#             */
/*   Updated: 2022/02/11 15:48:59 by jvalenci         ###   ########.fr       */
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
int set_up(int args, int *num, t_list **stack_a , t_list **stack_b);
int ft_issort(int args, int *num);
void ft_ra(t_list **stack_a);
void ft_rb(t_list **stack_b);
void ft_rr(t_list **stack_a, t_list **stack_b);
void ft_sa(t_list **stack_a);
void ft_sb(t_list **stack_b);
void ft_ss(t_list **stack_a, t_list **stack_b);
void ft_rra(t_list **stack_a);
void    ft_pa(t_list **stack_b, t_list **stack_a);
void    ft_pb(t_list **stack_a, t_list **stack_b);

#endif

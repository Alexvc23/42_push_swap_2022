/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:19:46 by jvalenci          #+#    #+#             */
/*   Updated: 2022/02/23 10:57:35 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include"../libft/includes/libft.h"
# include<limits.h>

/*
 * ─── FUNCTIONS ─────────────────────────────────────────────────────────────
 */

unsigned int	ft_check_num(int args, char *argv[]);
int				set_up(int args, int *num, t_list **stack_a, t_list **stack_b);
int				ft_issort(int args, int *num);
void			ft_ra(t_list **stack_a, char letter);
void			ft_rb(t_list **stack_b, char letter);
void			ft_rr(t_list **stack_a, t_list **stack_b);
void			ft_sa(t_list **stack_a, char letter);
void			ft_sb(t_list **stack_b, char letter);
void			ft_ss(t_list **stack_a, t_list **stack_b);
void			ft_rra(t_list **stack_a, char letter);
void			ft_rrb(t_list **stack_b, char letter);
void			ft_rrr(t_list **stack_a, t_list **stack_b);
void			ft_pa(t_list **stack_b, t_list **stack_a, char letter);
void			ft_pb(t_list **stack_a, t_list **stack_b, char letter);
void			ft_two_nbrs(t_list **stack_a);
void			ft_three_nbrs(t_list **stack_a);
void			ft_five_nbrs(t_list **a, t_list **b);
int				ft_before_max(t_list **stack, int gts);
int				ft_index(t_list **stack, int num);
int				ft_min(t_list **stack);
int				ft_max(t_list **stack);
int				ft_min_if_null(t_list **stack);
void			ft_big_sort(t_list **a, t_list **b);
#endif

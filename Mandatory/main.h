/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 11:43:43 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/20 11:46:11 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "../42_Libft/libft.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

int		main(int c, char **ar);

void	ft_initialize(int c, char **ar, t_list **a);
void	ft_valide1(char *s, t_list **a);
void	ft_valide2(t_list **a);

void	ft_free1(char **s);
void	ft_free2(t_list **a);
long	ft_atoi2(const char *str);
void	ft_exit(void);
int		ft_check(t_list *a);

void	ft_swap(t_list **lst);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);

void	ft_rotate(t_list **lst);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);

void	ft_r_rotate(t_list **lst);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

void	ft_push(t_list **lst1, t_list **lst2);
void	pa(t_list **b, t_list **a);
void	pb(t_list **a, t_list **b);

void	ft_sort_under_3(t_list **a);
long	ft_pos_max(t_list *a);

void	ft_sort_3_to_5(t_list **a, t_list **b);
long	ft_pos_min(t_list *a);
void	ft_do(t_list **a, t_list **b, long pos);

void	ft_sort_over_5(t_list **a, t_list **b);
void	ft_index(t_list **a);
void	ft_range1(t_list **a, t_list **b);
void	ft_range2(t_list **a, t_list **b);

#endif

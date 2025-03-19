/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noctis <noctis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:05:11 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/19 18:21:19 by noctis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "../42_Libft/libft.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

int		main(int c, char **ar);

int		ft_check1(char *t, t_list **a, t_list **b);
int		ft_check2(char *t1, char *t2);
int		ft_check3(t_list *a);

void	ft_initialize(int c, char **ar, t_list **a);
void	ft_valide1(char *s, t_list **a);
void	ft_valide2(t_list **a);

void	ft_free1(char **s);
void	ft_free2(t_list **a);
long	ft_atoi2(const char *str);
void	ft_exit(void);

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

#endif

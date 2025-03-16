/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noctis <noctis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 15:20:49 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/16 22:09:23 by noctis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "../42_Libft/libft.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		main(int c, char **ar);
void	ft_lst_print(t_list *lst);
void	leaks(void);

void	ft_initialize(int c, char **ar, t_list **a, t_list **b);
void	ft_valide1(char *s, t_list **a);
void	ft_valide2(t_list **a);

void	ft_free1(char **s);
void	ft_free2(t_list **a);
long	ft_atoi2(const char *str);
void	ft_exit(void);

#endif
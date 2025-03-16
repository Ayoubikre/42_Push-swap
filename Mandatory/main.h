/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 15:20:49 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/16 15:14:21 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
#define MAIN_H

#include "../42_Libft/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
# include <limits.h>

int main(int c, char **ar);
void leaks();
void ft_lst_print(t_list *a);

void ft_initialize(int c, char **ar, t_list **a, t_list**b);
int ft_calcul(int c, char **ar);
void ft_valid(char *s);
void ft_free(char **s);
size_t	ft_counts(char const *s, char c);
long	ft_atoi2(const char *str);


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:05:19 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/19 14:29:46 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

void	ft_free1(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	s = NULL;
}

void	ft_free2(t_list **lst)
{
	t_list	*ptr;

	if (!lst)
		return ;
	while (*lst)
	{
		ptr = *lst;
		*lst = (*lst)->next;
		free(ptr);
	}
	*lst = NULL;
}

void	ft_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

long	ft_atoi2(const char *str)
{
	long	r;
	long	f;

	r = 0;
	f = 1;
	while ((9 <= *str && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			f *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		r = r * 10 + (*str - '0');
		str++;
	}
	return (r * f);
}

int	ft_check(t_list *a)
{
	int	n;

	while (a->next)
	{
		n = a->i;
		if (n > a->next->i)
			return (0);
		a = a->next;
	}
	return (1);
}

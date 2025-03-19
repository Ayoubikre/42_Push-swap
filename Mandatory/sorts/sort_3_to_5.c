/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_to_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:05:50 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/19 13:59:30 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

void	ft_sort_3_to_5(t_list **a, t_list **b)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		ft_do(a, b, ft_pos_min(*a));
		i++;
	}
	ft_sort_under_3(a);
	i = 0;
	while (i < 2)
	{
		pa(b, a);
		i++;
	}
}

long	ft_pos_min(t_list *a)
{
	long	i;
	long	min;
	long	pos;

	i = 0;
	min = 2147483647;
	while (a)
	{
		if (min >= a->i)
		{
			min = a->i;
			pos = i;
		}
		i++;
		a = a->next;
	}
	return (pos);
}

void	ft_do(t_list **a, t_list **b, long pos)
{
	long	i;

	if (pos <= (ft_lstsize(*a) / 2))
	{
		i = 0;
		while (i < pos)
		{
			ra(a);
			i++;
		}
		pb(a, b);
	}
	else
	{
		i = ft_lstsize(*a);
		while (pos < i)
		{
			rra(a);
			pos++;
		}
		pb(a, b);
	}
}

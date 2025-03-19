/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:05:43 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/19 13:59:07 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

void	ft_sort_under_3(t_list **a)
{
	long	pos;
	int		s;

	pos = ft_pos_max(*a);
	s = ft_lstsize(*a);
	if (s == 3 && pos == 0)
		ra(a);
	else if (s == 3 && pos == 1)
		rra(a);
	if ((*a)->i > (*a)->next->i)
		sa(a);
}

long	ft_pos_max(t_list *a)
{
	long	i;
	long	max;
	long	pos;

	i = 0;
	max = -2147483648;
	while (a)
	{
		if (max <= a->i)
		{
			max = a->i;
			pos = i;
		}
		i++;
		a = a->next;
	}
	return (pos);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_over_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:05:47 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/19 13:57:26 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

void	ft_sort_over_5(t_list **a, t_list **b)
{
	ft_index(a);
	ft_range1(a, b);
	ft_range2(a, b);
}

void	ft_index(t_list **a)
{
	long	i;
	int		min;
	t_list	*ptr;
	t_list	*tmp;

	i = 0;
	while (i < ft_lstsize(*a))
	{
		ptr = *a;
		min = 2147483647;
		tmp = NULL;
		while (ptr)
		{
			if (ptr->index == -1 && ptr->i <= min)
			{
				tmp = ptr;
				min = ptr->i;
			}
			ptr = ptr->next;
		}
		if (tmp)
			tmp->index = i;
		i++;
	}
}

void	ft_range1(t_list **a, t_list **b)
{
	long	min;
	long	max;
	t_list	*ptr;

	min = 0;
	max = (ft_lstsize(*a) * 0.05) + 10;
	while (*a)
	{
		ptr = *a;
		if (min <= ptr->index && ptr->index <= max)
		{
			pb(a, b);
			min++;
			max++;
		}
		else if (ptr->index < min)
		{
			pb(a, b);
			rb(b);
			min++;
			max++;
		}
		else if (ptr->index > max)
			ra(a);
	}
}

void	ft_range2(t_list **a, t_list **b)
{
	long	i;
	long	pos;

	while (*b)
	{
		pos = ft_pos_max(*b);
		if (pos < ft_lstsize(*b) / 2)
		{
			i = 0;
			while (i < pos)
				(rb(b), i++);
			pa(b, a);
		}
		else
		{
			i = ft_lstsize(*b);
			while (pos < i)
				(rrb(b), pos++);
			pa(b, a);
		}
	}
}

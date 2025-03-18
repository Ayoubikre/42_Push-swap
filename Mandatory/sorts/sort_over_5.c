/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_over_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noctis <noctis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 21:48:22 by noctis            #+#    #+#             */
/*   Updated: 2025/03/18 22:35:56 by noctis           ###   ########.fr       */
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
	t_list	*ptr;
	t_list2	data;

	while (*b)
	{
		ptr = *b;
		data.i = 0;
		data.s = ft_lstsize(*b);
		data.max = -2147483648;
		while (ptr)
		{
			if (ptr->i >= data.max)
			{
				data.max = ptr->i;
				data.pos = data.i;
			}
			data.i++;
			ptr = ptr->next;
		}
		ft_do(a, b, &data);
	}
}

void	ft_do(t_list **a, t_list **b, t_list2 *data)
{
	long	j;

	if (data->pos <= data->s / 2)
	{
		j = 0;
		while (j < data->pos)
		{
			rb(b);
			j++;
		}
		pa(b, a);
	}
	else
	{
		j = ft_lstsize(*b);
		while (data->pos < j)
		{
			rrb(b);
			data->pos++;
		}
		pa(b, a);
	}
}

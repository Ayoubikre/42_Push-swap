/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 11:44:34 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/20 11:44:35 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

int	ft_check1(char *t, t_list **a, t_list **b)
{
	if (ft_check2(t, "sa") == 1)
		sa(a);
	else if (ft_check2(t, "sb") == 1)
		sb(b);
	else if (ft_check2(t, "ss") == 1)
		ss(a, b);
	else if (ft_check2(t, "ra") == 1)
		ra(a);
	else if (ft_check2(t, "rb") == 1)
		rb(b);
	else if (ft_check2(t, "rr") == 1)
		rr(a, b);
	else if (ft_check2(t, "rra") == 1)
		rra(a);
	else if (ft_check2(t, "rrb") == 1)
		rrb(b);
	else if (ft_check2(t, "rrr") == 1)
		rrr(a, b);
	else if (ft_check2(t, "pa") == 1)
		pa(b, a);
	else if (ft_check2(t, "pb") == 1)
		pb(a, b);
	else
		return (0);
	return (1);
}

int	ft_check2(char *t1, char *t2)
{
	if (ft_strnstr(t1, t2, ft_strlen(t2)) != NULL && (ft_strlen(t1)
			- 1 == ft_strlen(t2)))
		return (1);
	return (0);
}

int	ft_check3(t_list *a)
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

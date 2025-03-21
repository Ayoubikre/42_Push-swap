/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:05:23 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/19 14:34:37 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

int	main(int c, char **ar)
{
	t_list	*a;
	t_list	*b;
	long	s;

	a = NULL;
	b = NULL;
	if (c < 2)
		return (0);
	ft_initialize(c, ar, &a);
	if (ft_check(a))
		return (ft_free2(&a), ft_free2(&b), 0);
	s = ft_lstsize(a);
	if (s <= 3)
		ft_sort_under_3(&a);
	else if (s <= 5)
		ft_sort_3_to_5(&a, &b);
	else
		ft_sort_over_5(&a, &b);
	return (ft_free2(&a), ft_free2(&b), 0);
}

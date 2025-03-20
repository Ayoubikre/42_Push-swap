/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 11:44:23 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/20 11:54:09 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

int	main(int c, char **ar)
{
	t_list	*a;
	t_list	*b;
	char	*t;

	a = NULL;
	b = NULL;
	if (c < 2)
		return (0);
	ft_initialize(c, ar, &a);
	while (1)
	{
		t = get_next_line(0);
		if (!t)
			break ;
		if (ft_check1(t, &a, &b) == 0)
		{
			(free(t), ft_free2(&a), ft_free2(&b));
			ft_exit();
		}
		free(t);
	}
	if (ft_check3(a))
		return (write(1, "OK\n", 3), ft_free2(&a), ft_free2(&b), 0);
	return (write(1, "KO\n", 3), ft_free2(&a), ft_free2(&b), 0);
}

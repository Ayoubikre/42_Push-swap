/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noctis <noctis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 15:08:49 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/16 22:12:41 by noctis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

int	main(int c, char **ar)
{
	t_list	*a;
	t_list	*b;
	t_list	*lst;

	// atexit(leaks);
	a = NULL;
	b = NULL;
	ft_initialize(c, ar, &a, &b);
	ft_lst_print(a);



	
	ft_free2(&a);
	return (0);
}

void	ft_lst_print(t_list *ptr)
{
	printf("\n ------------------------------ \n\n");
	while (ptr)
	{
		printf("-  %d  -", ptr->i);
		ptr = ptr->next;
	}
	printf("\n\n ------------------------------ \n");
}

void	leaks(void)
{
	system("leaks -q push_swap");
}

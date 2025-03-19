/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noctis <noctis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 15:08:49 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/19 04:11:53 by noctis           ###   ########.fr       */
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
	s = ft_lstsize(a);
	if (s <= 3)
		ft_sort_under_3(&a, &b);
	else if (s <= 5)
		ft_sort_3_to_5(&a, &b);
	else
		ft_sort_over_5(&a, &b);
	ft_free2(&a);
	ft_free2(&b);
	return (0);
	// change my header name noctis
}

void	ft_lst_print_B(t_list *a, t_list *b)
{
	printf("\n------------------------------\n");
	ft_lst_print(a);
	printf("\n        ---               \n");
	ft_lst_print(b);
	printf("\n------------------------------\n");
}

void	ft_lst_print(t_list *ptr)
{
	if (!ptr)
		return ;
	printf("\n");
	printf("->  %d:%ld  -", ptr->i, ptr->index);
	ptr = ptr->next;
	while (ptr)
	{
		printf("->  %d : %ld  -", ptr->i, ptr->index);
		ptr = ptr->next;
	}
	printf("\n");
}

void	leaks(void)
{
	system("leaks -q push_swap");
}

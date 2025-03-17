/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 15:08:49 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/17 13:19:52 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

int	main(int c, char **ar)
{
	t_list	*a;
	t_list	*b;
	// t_list	*lst;

	// atexit(leaks);
	a = NULL;
	b = NULL;
	if(c<2)
		return(0);
	ft_initialize(c, ar, &a);
	// ft_lst_print(a);

	// ft_shift_up(&a);
	// ft_lst_print(a);
	
	// ft_shift_up(&a);
	// ft_lst_print(a);
	
	// ft_shift_dw(&a);
	// ft_lst_print(a);

	// ft_swap(&a);
	// ft_lst_print(a);
	
	// ft_push(&a, &b);
	// ft_lst_print(a);
	
	// ft_push(&a, &b);
	// ft_lst_print(a);
	
	// ft_push(&a, &b);
	// ft_lst_print(a);
	
	// 	ft_lst_print_B(a,b);

	// ft_push(&b, &a);
	// ft_lst_print(a);
	
	// ft_push(&b, &a);
	// ft_lst_print(a);
	

	ft_free2(&a);
	return (0);
}



void ft_lst_print_B(t_list *a, t_list *b)
{
	printf("\n\n------------------------------\n\n");
	ft_lst_print(a);
		printf("\n\n        ---               \n\n");
	ft_lst_print(b);
	printf("\n\n------------------------------\n\n");
 
}
void	ft_lst_print(t_list *ptr)
{
	if (!ptr )
		return ;

	printf("\n\n");
	printf("->  %d  -", ptr->i);
	ptr = ptr->next;
	while (ptr)
	{
		printf("-  %d  -", ptr->i);
		ptr = ptr->next;
	}
	printf("\n\n");
}

void	leaks(void)
{
	system("leaks -q push_swap");
}

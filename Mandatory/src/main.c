/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 15:08:49 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/16 15:32:13 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

int main(int c, char **ar)
{
	atexit(leaks);
	
    t_list *a;
    t_list *b;
	a=NULL;
	b=NULL;
	
    ft_initialize(c, ar, &a, &b);
	// ft_lst_print(a);
	




    printf("\n\n-----------\n");
    return 0;
}

void ft_lst_print(t_list *a)
{
	while(!a)
	{
		printf("-> a->i: %d <-\n", a->i);
		a=a->next;
	}
}
void leaks()
{
	system("leaks -q push_swap");
}

// ft_lstnew_bonus.c
// ft_lstadd_back_bonus.c
// ft_lstadd_front_bonus.c

// ft_lstlast_bonus.c
// ft_lstsize_bonus.c

// ft_lstclear_bonus.c
// ft_lstdelone_bonus.c

// ft_lstiter_bonus.c

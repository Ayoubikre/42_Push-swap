/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noctis <noctis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:57:31 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/18 13:54:55 by noctis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

void	ft_push(t_list **lst1, t_list **lst2)
{
	t_list	*ptr;

	if (!lst1 || !*lst1)
		return ;
	ptr = *lst1;
	*lst1 = (*lst1)->next;
	ptr->next = NULL;
	ft_lstadd_front(lst2, ptr);
}

void	pa(t_list **b, t_list **a)
{
	ft_push(b, a);
	ft_printf("pa\n");
}

void	pb(t_list **a, t_list **b)
{
	ft_push(a, b);
	ft_printf("pb\n");
}

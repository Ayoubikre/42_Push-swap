/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 11:44:59 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/20 11:45:00 by aakritah         ###   ########.fr       */
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
}

void	pb(t_list **a, t_list **b)
{
	ft_push(a, b);
}

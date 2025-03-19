/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:05:55 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/19 13:05:56 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

void	ft_swap(t_list **lst)
{
	t_list	*ptr;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	ptr = (*lst)->next;
	(*lst)->next = ptr->next;
	ptr->next = (*lst);
	*lst = ptr;
}

void	sa(t_list **a)
{
	ft_swap(a);
	ft_printf("sa\n");
}

void	sb(t_list **b)
{
	ft_swap(b);
	ft_printf("sb\n");
}

void	ss(t_list **a, t_list **b)
{
	ft_swap(a);
	ft_swap(b);
	ft_printf("ss\n");
}

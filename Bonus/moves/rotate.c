/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 11:44:50 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/20 11:44:51 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

void	ft_rotate(t_list **lst)
{
	t_list	*ptr;
	t_list	*ptr2;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	ptr = (*lst);
	*lst = (*lst)->next;
	ptr2 = ft_lstlast(*lst);
	ptr2->next = ptr;
	ptr->next = NULL;
}

void	ra(t_list **a)
{
	ft_rotate(a);
}

void	rb(t_list **b)
{
	ft_rotate(b);
}

void	rr(t_list **a, t_list **b)
{
	ft_rotate(a);
	ft_rotate(b);
}

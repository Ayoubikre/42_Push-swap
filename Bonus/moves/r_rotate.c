/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 11:44:55 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/20 11:44:56 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

void	ft_r_rotate(t_list **lst)
{
	t_list	*ptr;
	t_list	*ptr2;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	ptr = ft_lstlast(*lst);
	ptr2 = *lst;
	while (ptr2->next && (ptr2->next)->next)
		ptr2 = ptr2->next;
	ptr2->next = NULL;
	ptr->next = *lst;
	*lst = ptr;
}

void	rra(t_list **a)
{
	ft_r_rotate(a);
}

void	rrb(t_list **b)
{
	ft_r_rotate(b);
}

void	rrr(t_list **a, t_list **b)
{
	ft_r_rotate(a);
	ft_r_rotate(b);
}

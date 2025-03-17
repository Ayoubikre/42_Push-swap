/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_dw.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:29:08 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/17 13:28:40 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

void	ft_shift_dw(t_list **lst)
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
	ft_shift_dw(a);
	ft_printf("rra\n");
}

void	rrb(t_list **b)
{
	ft_shift_dw(b);
	ft_printf("rrb\n");
}

void	rrr(t_list **a, t_list **b)
{
	ft_shift_dw(a);
	ft_shift_dw(b);
	ft_printf("rr\n");
}

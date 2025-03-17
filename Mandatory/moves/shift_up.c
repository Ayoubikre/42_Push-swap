/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_up.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:29:09 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/17 13:06:30 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

void	ft_shift_up(t_list **lst)
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
	ft_shift_up(a);
	ft_printf("ra");
}

void	rb(t_list **b)
{
	ft_shift_up(b);
	ft_printf("rb");
}

void	rr(t_list **a, t_list **b)
{
	ft_shift_up(a);
	ft_shift_up(b);
	ft_printf("rr");
}

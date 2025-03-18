/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_up.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noctis <noctis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:29:09 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/18 12:11:26 by noctis           ###   ########.fr       */
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
	ft_printf("ra\n");
}

void	rb(t_list **b)
{
	ft_rotate(b);
	ft_printf("rb\n");
}

void	rr(t_list **a, t_list **b)
{
	ft_rotate(a);
	ft_rotate(b);
	ft_printf("rr\n");
}

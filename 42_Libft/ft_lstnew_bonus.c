/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:06:42 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/19 13:06:47 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int i)
{
	t_list	*n;

	n = malloc(sizeof(t_list));
	if (!n)
		return (NULL);
	n->i = i;
	n->index = -1;
	n->next = NULL;
	return (n);
}

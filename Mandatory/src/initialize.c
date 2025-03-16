/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noctis <noctis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 13:10:16 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/16 22:12:14 by noctis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

void	ft_initialize(int c, char **ar, t_list **a, t_list **b)
{
	int		i;
	int		y;
	int		k;
	char	**t;

	i = 1;
	while (i < c)
	{
		ft_valide1(ar[i], a);
		t = ft_split(ar[i], ' ');
		k = 0;
		while (t[k])
		{
			ft_lstadd_back(a, ft_lstnew(ft_atoi(t[k])));
			k++;
		}
		ft_free1(t);
		i++;
	}
	ft_valide2(a);
}

void	ft_valide1(char *s, t_list **a)
{
	char	**tmp;

	int (j), i = 0;
	tmp = ft_split(s, ' ');
	if (!tmp)
		((ft_free2(a)), (exit(1)));
	while (tmp[i])
	{
		j = 0;
		while (tmp[i][j])
		{
			if (j == 0 && !(ft_isdigit(tmp[i][j]) || ((tmp[i][j] == '-'
					|| tmp[i][j] == '+') && ft_strlen(tmp[i]) > 1)))
				((ft_free1(tmp)), (ft_free2(a)), ft_exit());
			else if (j > 0 && !(ft_isdigit(tmp[i][j])))
				((ft_free1(tmp)), (ft_free2(a)), ft_exit());
			j++;
		}
		if (!(INT_MIN <= ft_atoi2(tmp[i]) && ft_atoi2(tmp[i]) <= INT_MAX))
			((ft_free1(tmp)), (ft_free2(a)), ft_exit());
		i++;
	}
	ft_free1(tmp);
}

void	ft_valide2(t_list **a)
{
	t_list	*ptr1;
	t_list	*ptr2;

	ptr1 = *a;
	while (ptr1)
	{
		ptr2 = ptr1->next;
		while (ptr2)
		{
			if (ptr1->i == ptr2->i)
				((ft_free2(a)), ft_exit());
			ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}
}

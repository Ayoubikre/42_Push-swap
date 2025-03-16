/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 13:10:16 by aakritah          #+#    #+#             */
/*   Updated: 2025/03/16 15:48:57 by aakritah         ###   ########.fr       */
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
        ft_valid(ar[i]);
		y = ft_counts(ar[i], ' ');
		if (y > 1)
		{
            k=0;
			t = ft_split(ar[i], ' ');
			while (t[k])
			{
				ft_lstadd_back(a, ft_lstnew(ft_atoi(t[k])));
				t++;
			}
            ft_free(t);
		}
		else
		{
			ft_lstadd_back(a, ft_lstnew(ft_atoi(ar[i])));
		}
        printf("-> ar[i]: %d <-\n", ft_atoi(ar[i]));
		i++;
	}
}


void	ft_valid(char *s)
{
	int		i;
	int		j;
	char	**tmp;

	i = 0;
	tmp = ft_split(s, ' ');
	while (tmp[i])
	{
		j = 0;
		while (tmp[i][j])
		{
            if(j==0)
            {
                if (!(ft_isdigit(tmp[i][j]) || ( tmp[i][j] == '-'
                        || tmp[i][j] == '+')))
                {
                    ft_free(tmp);
                    printf("ERROR 1 \n");
                    exit(1);
                }
            }
			else
            {
                if (!(ft_isdigit(tmp[i][j])))
                {
                    ft_free(tmp);
                    printf("ERROR 1 \n");
                    exit(1);
                }
            }
			j++;
		}
		if (!(INT_MIN <= ft_atoi2(tmp[i]) && ft_atoi2(tmp[i]) <= INT_MAX))
		{
			ft_free(tmp);
			ft_printf("ERROR 2\n");
			exit(1);
		}
		i++;
	}
    ft_free(tmp);
}

void	ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	s = NULL;
}

size_t	ft_counts(char const *s, char c)
{
	size_t	i;
	size_t	f;
	size_t	count;

	i = 0;
	f = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && f == 0)
		{
			count++;
			f = 1;
		}
		else if (s[i] == c)
			f = 0;
		i++;
	}
	return (count);
}

long	ft_atoi2(const char *str)
{
	long r;
	long f;

	r = 0;
	f = 1;
	while ((9 <= *str && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			f *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		r = r * 10 + (*str - '0');
		str++;
	}
	return (r * f);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 16:05:39 by lbuang            #+#    #+#             */
/*   Updated: 2019/06/20 16:12:07 by lbuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	unsigned int	st;
	unsigned int	e;
	unsigned int	i;
	unsigned int	wc;
	char			**table;

	wc = 0;
	table = NULL;
	i = 0;
	if (s && ((table = (char **)malloc(sizeof(*table) * ft_strlen(s)))))
	{
		while (i < ft_strlen(s))
		{
			while (s[i] == c && s[i])
				i++;
			st = i;
			while (s[i] != c && s[i])
				i++;
			e = i;
			if ((e - st) > 0)
				table[wc++] = ft_strsub(s, st, e - st);
		}
		table[wc] = 0;
	}
	return (table);
}

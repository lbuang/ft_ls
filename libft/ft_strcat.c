/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:31:51 by lbuang            #+#    #+#             */
/*   Updated: 2019/06/05 10:22:10 by lbuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] != '\0')
	{
		++i;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		++j;
	}
	s1[i] = '\0';
	return (s1);
}
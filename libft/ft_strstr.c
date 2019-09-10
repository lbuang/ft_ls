/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 12:07:51 by lbuang            #+#    #+#             */
/*   Updated: 2019/06/13 12:16:27 by lbuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	if (s1[0] == '\0' && s2[0] == '\0')
	{
		return ((char *)s1);
	}
	while (s1[i] != '\0')
	{
		k = 0;
		while (s2[k] != '\0' && s1[i + k] == s2[k])
			k++;
		if (s2[k] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}

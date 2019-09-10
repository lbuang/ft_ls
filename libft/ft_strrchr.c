/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 12:59:52 by lbuang            #+#    #+#             */
/*   Updated: 2019/06/13 13:03:12 by lbuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = (0);
	while (*s)
	{
		if (*s == c)
			str = (char *)s;
		++s;
	}
	if (str)
		return (str);
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (0);
}

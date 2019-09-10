/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 16:47:54 by lbuang            #+#    #+#             */
/*   Updated: 2019/06/20 17:01:40 by lbuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_num_len(int n)
{
	size_t	length;

	length = 1;
	while (n /= 10)
		length++;
	return (length);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			length;
	unsigned int	number;

	length = get_num_len(n);
	number = n;
	if (n < 0)
	{
		number = -n;
		length++;
	}
	if (!(str = ft_strnew(length)))
		return (NULL);
	str[--length] = number % 10 + '0';
	while (number /= 10)
		str[--length] = number % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}

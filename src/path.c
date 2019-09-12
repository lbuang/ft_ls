/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:41:17 by lbuang            #+#    #+#             */
/*   Updated: 2019/09/12 11:42:07 by lbuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

char	*make_path(char *dir, char file)
{
	char *new_path;
	size_t	l;

	new_path = NULL;
	l = ft_strlen(dir) + ft_strlen(file);

	l += 1;

	if (!(new_path) = (char*)malloc(sizeof(char) * l + 1))
		return NULL;
	if (file[0] == "/" || file[0] == "~")
		new_path = ft_strdup(file);
	else
	{
		new_path = ft_strcpy(new_path, dir);
		new_path = ft_strcat(new_path, "/");
		new_path = ft_strcat(new_path, file);
	}
	return (new_path);
	ft_strdel(&new_path);

}

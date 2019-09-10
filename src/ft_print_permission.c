/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_permission.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:28:59 by lbuang            #+#    #+#             */
/*   Updated: 2019/09/10 13:40:19 by lbuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_ls.h"
#include <sys/stat.h>

void		ft_get_usrperm(struct stat st)
{
	mode_t	permission;

	permission = st.st_mode & S_IRWXU;
	if (permission & S_IRUSR)
		ft_putchar("r");
	else
		ft_putchar("-");
	if (permission & S_IWUSR)
		ft_putchar("w");
	else
		ft_putchar("-");
	if (permission & S_IXUSR)
		ft_putchar("x");
	else
		ft_putchar("-");
}

void		ft_grppermission(struct stat st)
{
	mode_t	permission;

	permission = st.st_mode & S_IRWXG;
	if (permission & S_IRGRP)
		ft_putchar("r");
	else
		ft_putchar("-");
	if (permission & S_IWGRP)
		ft_putchar("w");
	else
		ft_putchar("-");
	if (permission & S_IXGRP)
		ft_putchar("x");
	else
		ft_putchar("-");
}

void		ft_isdir(struct stat st)
{
	if (S_ISDIR(st.st_mode))
		ft_putchar("d");
}

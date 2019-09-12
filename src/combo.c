/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:40:48 by lbuang            #+#    #+#             */
/*   Updated: 2019/09/12 14:30:17 by lbuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"


void	ft_foldername(char *ptr)
{
	ft_putstr(ptr);
	ft_putchar('\n');
}

void ft_symbolic_link(t_files *file, t_flags *flag)
{
	ft_putstr(file->name);
	if (flag.l == TRUE)
		ft_putstr(file->link);
	ft_putchar('\n');
}

void ft_execute(char *ptr)
{
	ft_putstr(ptr);
	ft_putchar('\n');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:42:19 by lbuang            #+#    #+#             */
/*   Updated: 2019/09/12 14:38:06 by lbuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

void	ft_print_type(t_file tmp)
{
	if (S_ISDIR(tmp()->st_mode))
		ft_foldername(tmp()->name);
	else if (S_ISLNK(tmp()->node)
		ft_symbolic_link(tmp, flag);
	else if (((tmp)->st_mode > 0) && S_IEXEC && (tmp)->st_mode)
		ft_execute((tmp)->name);
	else if (S_ISREG(tmp)->st_mode)
		ft_putendl((tmp)->name);
	else
		ft_putchar('\0');
}

void	ft_time(struct stat st, t_flags flag)
{
	int c;
	char date[50];

	ft_memset(date, 0, sizeof(date));
	ft_strcpy(date, ctime(&st.st_mode), sizeof(date));
	c = 0;
	while (date[c] != '\0')
	{
		if (date[c] == '\n')
			date[c] = '\0';
		c++;

	}
	ft_putstr(date);
	ft_putchar(" ");
}

void	print_info(struct stat st)
{
	struct group *ptr;

	ft_putnbr((int)st.st_nlink);
	ft_putchar(' ');

	ptr = getgrgid(st.st_gid); 						//google
	ft_putstr(ptr->gr_name);
	ft_putchar(" ");
	ft_putnbr((long)st.st_size);					//google
	ft_putchar(' ');
}

void	ft_recursion(t_files *tmp, t_flags flag)
{
	if (!flag.a)
	{
		if (tmp->name[0] != ".")
		{
			if (flag.l == TRUE)
			{
				ft_print_permission(tmp->stat);
				print_info()(tmp->stat);	//read about STAT
				ft_time(tmp->stat);
			}
			ft_print_type(tmp, flag);
		}
	}
	else
	{
		if (flags.l == TRUE)
		{
			ft_print_permission(tmp->stat);
			print_info()(tmp->stat);	//read about STAT
			ft_time(tmp->stat);
		}
		ft_print_type(tmp, flag);
	}
}

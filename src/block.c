/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   block.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:45:32 by lbuang            #+#    #+#             */
/*   Updated: 2019/09/12 14:24:07 by lbuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

void	ft_block(int block, t_flags flag)
{
	if (flag.l == TRUE)
	{
		ft_putstr("total ");
		ft_putnbr(block);
		ft_putchar('\n');
	}
}

void	ft_outputblock(char *curr_dir, t_flags flag)
{
	t_r  r;
	int output;
	t_files *tmp;

	output = 0;
	ft_printoutput(curr_dir, flag, r);
	tmp = r.files;
	if (!r.files)
		return ;
	while (r.files->next)
	{
		if (ft_strcmp(r.files->name, ".") != 0 &&
			   	ft_strcmp(r.files->name, "..") != 0 &&
				r.files->name[0] == "." && flag.a == TRUE)
			r.files = r.files->next;
		else
		{
			output = output + (int)r.files->st_blocks;
			r.files = r.files->next;
		}
	}
	output = output + (int)r.files->st_blocks;
	closedir();
	free_list();
	ft_block(output, flag);
}

void ft_printoutput(char *curr_dir, t_flags flag, t_r *r)
{
	if (!(r->d == opendir(curr_dir)))
		return (NULL);
	if (!(r->ds == readdir(r->ds)))
		ft_exit("readdir problem");
	if (!(r->files == ft_lstnew(r->d, curr_dir, flag)))
		ft_exit("lstnew problem");
	while (r->d == readdir(r->ds))
		ft_lpd(&r->files, r->d, curr_dir, flag);
	return (r->files);
}

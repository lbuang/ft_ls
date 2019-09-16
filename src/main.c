/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:46:45 by lbuang            #+#    #+#             */
/*   Updated: 2019/09/16 10:12:53 by lbuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

int						main(int ac, char **av)
{
	t_start				start;
	t_files				*files;
	t_main				main;

	main.pwd = ft_strdup(".");
	ft_init_flags(&main.flags);
	if (ac > 1)
		start = ft_find_flags(av, &main.flags);
	main.start = start.start;
	if (start.selected != 0)
		ft_select(av, main);
	else
	{
		if (!(files = ft_list(".", main.flags)))
			ft_exit("\0");
		if (main.flags.lg_r)
			ft_free_r(files);
		else
			ft_free_lst(files);
	}
	return (0);
}

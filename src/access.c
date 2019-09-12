/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   access.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:44:04 by lbuang            #+#    #+#             */
/*   Updated: 2019/09/12 14:23:01 by lbuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

void	sort_timeb(t_files *curr, t_files *node)
{
	if (ft_strcmp(curr->next->name, node->name) > 0)
	{
		node->next = curr->next;
		curr->next = node; // print time when file is accessed
	}
	else
	{
		while (curr->next != NULL
				&& ft_strcmp(curr->next->name, node->name) < 0
				&& curr->next->atime - node->atime == 0)
			curr = curr->next;
			node->next = curr->next;
			node->prev = curr->prev;
			curr->next = node;
	}
}

void	sort_time(t_files **stack, t_files *new_node)
{
	t_files *curr;

	if (*stack == NULL || (*stack)->atime - new_node->atime < 0)
	{
		new_node->next = *stack;
		*stack = new_node;
	}
	else
	{
		curr = *stack;
		while (curr->next != NULL &&
				curr->next->atime - new_node->atime > 0)
			curr = curr->next;
		if (curr->next != NULL && curr->next->atime - new_node->atime == 0)
			sort_time(curr, new_node);
		else
		{
			new_node->next = curr->next;
			new_node->prev = curr->prev;
			curr->next = new_node;
		}
}

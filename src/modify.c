/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:44:36 by lbuang            #+#    #+#             */
/*   Updated: 2019/09/12 14:33:13 by lbuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

void	sort_time(t_files *curr, t_files *node)
{
	if (ft_strcmp(curr->next->name, node->name) > 0)
	{
		node->next = curr->next;
		curr->next = node;
	}
	else
	{
		while (curr->next != NULL
				&& ft_strcmp(curr->next->name, node->name) < 0
				&& curr->next->mtime - node->mtime == 0)
			curr = curr->next;
		node->next = curr->next;
		node->prev = curr->prev;
		curr->next = node;
	}
}

void	sort_time_b(t_files **stack, t_files node)
{
	t_files			*curr;

	if (*stack == NULL || (*stack)->mtime - node->mtime < 0)
	{
		node->next = *stack;
		*stack = node;
	}
	else
	{
		curr = *stack;
		while (curr->next != NULL
				&& curr->next->mtime - node->mtime > 0)
			curr = curr->next;
		if (curr->next != NULL
			&& curr->next->mtime - node->mtime == 0)
			sorted_insert_time_b(curr, node);
		else
		{
			node->next = curr->next;
			node->prev = curr->prev;
			curr->next = node;
		}
	}
}

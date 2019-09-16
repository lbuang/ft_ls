/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:44:36 by lbuang            #+#    #+#             */
/*   Updated: 2019/09/16 10:14:03 by lbuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

void				sorted_insert_time_b(t_files *current, t_files *new_node)
{
	if (ft_strcmp(current->next->name, new_node->name) > 0)
	{
		new_node->next = current->next;
		current->next = new_node;
	}
	else
	{
		while (current->next != NULL
				&& ft_strcmp(current->next->name, new_node->name) < 0
				&& current->next->mtime - new_node->mtime == 0)
			current = current->next;
		new_node->next = current->next;
		new_node->prev = current->prev;
		current->next = new_node;
	}
}

void				sorted_insert_time(t_files **head, t_files *new_node)
{
	t_files			*current;

	if (*head == NULL || (*head)->mtime - new_node->mtime < 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL
				&& current->next->mtime - new_node->mtime > 0)
			current = current->next;
		if (current->next != NULL
			&& current->next->mtime - new_node->mtime == 0)
			sorted_insert_time_b(current, new_node);
		else
		{
			new_node->next = current->next;
			new_node->prev = current->prev;
			current->next = new_node;
		}
	}
}

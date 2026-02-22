/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_link_nodes.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-kha <yael-kha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 00:05:13 by yael-kha          #+#    #+#             */
/*   Updated: 2026/02/20 11:11:13 by yael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create_node(int content, int id)
{
	t_list	*new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->value = content;
	new_node->index = id;
	new_node->next = NULL;
	new_node->previous = NULL;
	return (new_node);
}

t_list	*link_nodes(t_list **head, t_list *node)
{
	t_list	*current;

	if (!*head)
	{
		*head = node;
		return (node);
	}
	if (!node)
		return (NULL);
	current = *head;
	while (current->next)
		current = current->next;
	current->next = node;
	node->previous = current;
	node->next = NULL;
	return (node);
}

t_list	*stack(long *p)
{
	t_list	*head;
	t_list	*tmp;
	t_list	*tempo;
	int	*id;
	int	i;

	i = 0;
	head = NULL;
	id = indexing(p);
	if (!id)
		return (NULL);
	head = create_node(p[i], id[i]);
	i++;
	while (p[i] != EOR)
	{
		tmp = create_node(p[i], id[i]);
		tempo = link_nodes(&head, tmp);
		i++;
	}
	free(id);
	return (head);
}
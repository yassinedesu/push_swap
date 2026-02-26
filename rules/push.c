/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-kha <yael-kha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:56:54 by yael-kha          #+#    #+#             */
/*   Updated: 2026/02/25 15:57:04 by yael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	push(t_list **src, t_list **dest)
{
	t_list	*head;
	t_list	*tmp;

	if (!src || !*src)
		return ;
	head = *src;
	*src = head->next;
	if (*src)
		(*src)->previous = NULL;
	if (!*dest)
	{
		(*dest) = head;
		(*dest)->previous = NULL;
		(*dest)->next = NULL;
		return ;
	}
	tmp = *dest;
	tmp->previous = head;
	head->next = tmp;
	head->previous = NULL;
	*dest = head;
}

void	pa(t_list **src, t_list **dest)
{
	push(src, dest);
	write(1, "pa\n", 3);
	return ;
}

void	pb(t_list **dest, t_list **src)
{
	push(dest, src);
	write(1, "pb\n", 3);
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-kha <yael-kha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 13:56:10 by yael-kha          #+#    #+#             */
/*   Updated: 2026/02/10 14:01:39 by yael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list *stack)
{
	t_list	*tmp;

	if (!stack || !stack->next)
		return ;
	tmp = stack->next;
	stack->next = tmp->next;
	tmp->next = stack;
	stack = tmp;
}

void	rotate(t_list *stack)
{
	t_list	*tmp;
	t_list	*head;

	if (!stack || !stack->next)
		return ;
	head = stack;
	tmp = stack->next;
	while (stack)
		stack = stack->next;
	stack->next = head;
	head->next = NULL;
	tmp->previous = NULL;
}

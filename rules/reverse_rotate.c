/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-kha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 00:04:54 by yael-kha          #+#    #+#             */
/*   Updated: 2026/02/26 00:05:26 by yael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	reverse_rotate(t_list **stack)
{
	t_list	*head;
	t_list	*current;

	if (!stack || !*stack || !((*stack)->next))
		return ;
	current = *stack;
	while (current->next->next)
		current = current->next;
	head = *stack;
	head->previous = current->next;
	current->next->previous = NULL;
	current->next->next = head;
	*stack = current->next;
	current->next = NULL;
}

void	rra(t_list **stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
	return ;
}

void	rrb(t_list **stack_b)
{
	reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
	return ;
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
	return ;
}

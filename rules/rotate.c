/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-kha <yael-kha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 13:22:08 by yael-kha          #+#    #+#             */
/*   Updated: 2026/02/24 13:22:11 by yael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rotate(t_list **stack)
{
	t_list	*head;
	t_list	*new_head;
	t_list	*current;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	current = *stack;
	while (current->next)
		current = current->next;
	head = *stack;
	new_head = head->next;
	head->previous = current;
	head->next = NULL;
	current->next = head;
	new_head->previous = NULL;
	*stack = new_head;
}

void	ra(t_list **a)
{
	rotate(a);
	write(1, "ra\n", 3);
	return ;
}

void	rb(t_list **b)
{
	rotate(b);
	write(1, "rb\n", 3);
	return ;
}

void	rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
	return ;
}

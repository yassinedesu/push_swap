/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-kha <yael-kha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 13:56:10 by yael-kha          #+#    #+#             */
/*   Updated: 2026/02/10 14:01:39 by yael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	swap(t_list **stack)
{
	t_list	*first;
	t_list	*second;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	first->previous = second;
	if (first->next)
		first->next->previous = first;
	second->next = first;
	second->previous = NULL;
	*stack = second;
}

void	sa(t_list **a)
{
	swap(a);
	write(1, "sa\n", 3);
	return ;
}

void	sb(t_list **b)
{
	swap(b);
	write(1, "sb\n", 3);
	return ;
}

void	ss(t_list **a, t_list **b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
	return ;
}

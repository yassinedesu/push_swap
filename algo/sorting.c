/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-kha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 02:49:29 by yael-kha          #+#    #+#             */
/*   Updated: 2026/02/26 02:49:29 by yael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_two(t_list **a)
{
	if ((*a)->value > (*a)->next->value)
		sa(a);
}

void	sort_three(t_list **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;
	if (first > second && second < third && first < third)
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first < second && second > third && first < third)
	{
		sa(a);
		ra(a);
	}
	else if (first < second && second > third && first > third)
		rra(a);
}

void	sort_four(t_list **a, t_list **b)
{
	while ((*a)->index != 0)
		ra(a);
	pb(a, b);
	sort_three(a);
	pa(b, a);
}

void	sort_five(t_list **a, t_list **b)
{
	while ((*a)->index != 0)
		ra(a);
	pb(a, b);
	while ((*a)->index != 1)
		ra(a);
	pb(a, b);
	sort_three(a);
	pa(b, a);
	pa(b, a);
}

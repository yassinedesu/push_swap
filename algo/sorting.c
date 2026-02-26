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

static int	minimum_pos(t_list *a)
{
	t_list	*current;
	int		min_id;
	int		pos;
	int		min_pos;

	current = a;
	min_id = current->index;
	pos = 0;
	min_pos = 0;
	while (current)
	{
		if (current->index < min_id)
		{
			min_id = current->index;
			min_pos = pos;
		}
		current = current->next;
		pos++;
	}
	return (min_pos);
}

void	sort_five(t_list **a, t_list **b)
{
	int	min_pos;
	int	size;
	int	i;

	while (ft_lstsize(*a) > 3)
	{
		min_pos = minimum_pos(*a);
		size = ft_lstsize(*a);
		if (min_pos <= size / 2)
		{
			i = min_pos;
			while (i-- > 0)
				ra(a);
		}
		else
		{
			i = size - min_pos;
			while (i-- > 0)
				rra(a);
		}
		pb(a, b);
	}
	sort_three(a);
	pa(b, a);
	pa(b, a);
}

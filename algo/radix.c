/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-kha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 02:21:19 by yael-kha          #+#    #+#             */
/*   Updated: 2026/02/26 02:21:21 by yael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize(t_list *a)
{
	int	i;

	i = 0;
	while (a)
	{
		a = a->next;
		i++;
	}
	return (i);
}

static int	get_max_bits(t_list *stack)
{
	int	max;
	int	bits;

	max = 0;
	bits = 0;
	while (stack)
	{
		if (stack->index > max)
			max = stack->index;
		stack = stack->next;
	}
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

static void	radix_sort(t_list **a, t_list **b, int bit, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if ((((*a)->index >> bit) & 1) == 0)
			pb(a, b);
		else
			ra(a);
		i++;
	}
	while (*b)
		pa(b, a);
}

void	radix(t_list **a, t_list **b)
{
	int	bits;
	int	i;
	int	size;

	size = ft_lstsize(*a);
	bits = get_max_bits(*a);
	i = 0;
	while (i < bits)
	{
		radix_sort(a, b, i, size);
		i++;
	}
}

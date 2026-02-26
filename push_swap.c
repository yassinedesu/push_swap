/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-kha <yael-kha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:55:46 by yael-kha          #+#    #+#             */
/*   Updated: 2026/02/22 15:56:02 by yael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_sorted(t_list **a)
{
	t_list	*current;

	current = *a;
	while (current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}

static void	sort_stack(t_list **a)
{
	t_list	*b;
	int		size;

	b = NULL;
	size = ft_lstsize(*a);
	if (size == 1 || is_sorted(a))
		return ;
	else if (size == 2)
		sort_two(a);
	else if (size == 3)
		sort_three(a);
	else if (size == 4)
		sort_four(a, &b);
	else if (size == 5)
		sort_five(a, &b);
	else
		radix(a, &b);
}

int	main(int argc, char **argv)
{
	char	*joined;
	long	*p;
	t_list	*head;

	if (argc < 2)
		return (0);
	joined = join_args(argv);
	if (!joined)
		return (error_checker(), 1);
	p = valide(joined);
	free(joined);
	if (!p)
		return (error_checker(), 1);
	head = stack(p);
	free(p);
	if (!head)
		return (error_checker(), 1);
	sort_stack(&head);
	free_nodes(&head);
	return (0);
}

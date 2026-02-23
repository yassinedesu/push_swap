/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-kha <yael-kha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:07:57 by yael-kha          #+#    #+#             */
/*   Updated: 2026/02/15 23:12:17 by yael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	int_count(long *p)
{
	int	i;

	i = 0;
	while (p[i] != EOR)
		i++;
	return (i);
}

int	*indexing(long *p)
{
	int	i;
	int	j;
	int	count;
	int	*index;

	i = 0;
	index = malloc(sizeof(int) * (int_count(p) + 1));
	if (!index)
		return (NULL);
	while (p[i] != EOR)
	{
		j = 0;
		count = 0;
		while (p[j] != EOR)
		{
			if (p[i] > p[j])
				count++;
			j++;
		}
		index[i] = count;
		i++;
	}
	index[i] = -1;
	return (index);
}

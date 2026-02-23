/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_doubles.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-kha <yael-kha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 00:29:02 by yael-kha          #+#    #+#             */
/*   Updated: 2026/02/15 02:01:55 by yael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_doubles(long *ptr)
{
	int	i;
	int	j;

	i = 0;
	while (ptr[i] != EOR)
	{
		j = i + 1;
		while (ptr[j] != EOR)
		{
			if (ptr[i] == ptr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

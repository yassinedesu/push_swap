/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_empty.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-kha <yael-kha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:56:13 by yael-kha          #+#    #+#             */
/*   Updated: 2026/02/19 16:03:09 by yael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_empty(char **ptr)
{
	int	i;
	int	j;

	i = 0;
	while (ptr[i])
	{
		if (ptr[i] == NULL)
			return (-1);
		j = 0;
		while (ptr[i][j] == ' ')
			j++;
		if (ptr[i][j] == '\0')
			return (-1);
		i++;
	}
	return (0);
}

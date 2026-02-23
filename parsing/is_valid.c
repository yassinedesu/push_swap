/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-kha <yael-kha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 01:50:54 by yael-kha          #+#    #+#             */
/*   Updated: 2026/02/17 23:06:16 by yael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

static int	check_valid(char *ptr)
{
	int	i;

	i = 0;
	if (ptr[i] == '\0')
		return (-1);
	while (ptr[i])
	{
		if (!(ft_isdigit(ptr[i]) || ptr[i] == '-' || ptr[i] == '+'))
			return (-1);
		i++;
	}
	return (0);
}

int	is_valid(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		if (check_valid(ptr[i]) == -1)
			return (-1);
		i++;
	}
	return (0);
}

static long	to_int(char *ptr)
{
	int	i;

	i = 0;
	if (ptr[i] == '-' || ptr[i] == '+')
		i++;
	if (ptr[i] == '\0')
		return (EOR);
	while (ptr[i])
	{
		if (ptr[i] == '-' || ptr[i] == '+')
			return (EOR);
		i++;
	}
	return (ft_atoi(ptr));
}

long	*atoi_done(char **splited)
{
	int		i;
	int		count;
	long	*ptr;

	i = 0;
	count = 0;
	while (splited[count])
		count++;
	if (count == 0)
		return (NULL);
	ptr = malloc(sizeof(long) * (count + 1));
	if (!ptr)
		return (NULL);
	while (i < count)
	{
		if (splited[i][0] == '\0')
			return (NULL);
		ptr[i] = to_int(splited[i]);
		if (ptr[i] > MAX || ptr[i] < MIN || ptr[i] == EOR)
			return (free(ptr), NULL);
		i++;
	}
	ptr[i] = EOR;
	return (ptr);
}

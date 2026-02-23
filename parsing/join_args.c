/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-kha <yael-kha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:08:56 by yael-kha          #+#    #+#             */
/*   Updated: 2026/02/15 21:05:31 by yael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*join_args(char **args)
{
	int		i;
	char	*result;
	char	*temp;

	i = 1;
	result = ft_strdup("");
	if (!result)
		return (NULL);
	if (check_empty(args) == -1)
		return (free(result), NULL);
	while (args[i])
	{
		temp = ft_strjoin(result, args[i]);
		free(result);
		if (!temp)
			return (NULL);
		result = temp;
		temp = ft_strjoin(result, " ");
		free(result);
		if (!temp)
			return (NULL);
		result = temp;
		i++;
	}
	return (result);
}

long	*valide(char *ptr)
{
	char	**splited;
	long	*p;

	splited = ft_split(ptr, ' ');
	if (!splited)
		return (NULL);
	if (is_valid(splited) == -1)
		return (free_all(splited), NULL);
	p = atoi_done(splited);
	free_all(splited);
	if (!p)
		return (NULL);
	if (check_doubles(p) == 1)
		return (free(p), NULL);
	return (p);
}

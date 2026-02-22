/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-kha <yael-kha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 01:54:48 by yael-kha          #+#    #+#             */
/*   Updated: 2026/02/08 22:52:00 by yael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
#define	PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>

int     check_double(char **joined, int i);
void    free_me(char **ptr);
int     ft_atoi(const char *nptr);
char    **ft_split(char const *s, char c);
char    *ft_strdup(const char *s);
size_t  ft_strlen(const char *s);
char    *ft_strstr(const char *big, const char *little);
char    *ft_substr(char const *s, unsigned int start, size_t len);
int     ft_isspace(int c);
int     is_valid(int c);
char	*ft_strchr(const char *s, int c);

#endif

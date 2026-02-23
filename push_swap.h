/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-kha <yael-kha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 01:54:48 by yael-kha          #+#    #+#             */
/*   Updated: 2026/02/19 15:59:28 by yael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define EOR 9223372036854775807L
# define MIN -2147483648
# define MAX 2147483647

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
	struct s_node	*previous;
}					t_list;

int					is_valid(char **ptr);
int					check_doubles(long *ptr);
int					check_empty(char **ptr);
int					*indexing(long *p);
long				ft_atoi(const char *nptr);
long				*atoi_done(char **splited);
long				*valide(char *ptr);
char				**ft_split(char const *s, char c);
char				*ft_strdup(const char *s);
char				*ft_strstr(const char *big, const char *little);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strchr(const char *s, int c);
char				*ft_strjoin(char const *s1, char const *s2);
char				*join_args(char **args);
void				free_all(char **s);
void				free_nodes(t_list **head);
void				error_checker(void);
void				swap(t_list *stack);
void				rotate(t_list *stack);
size_t				ft_strlen(const char *s);
size_t				count_word(char *s, char c);
t_list				*create_node(int content, int id);
t_list				*link_nodes(t_list **head, t_list *node);
t_list				*stack(long *p);

#endif
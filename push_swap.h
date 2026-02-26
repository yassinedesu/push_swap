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

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

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
int					ft_lstsize(t_list *a);
long				ft_atoi(const char *nptr);
long				*atoi_done(char **splited);
long				*valide(char *ptr);
char				**ft_split(char const *s, char c);
char				*ft_strdup(const char *s);
char				*ft_strstr(const char *big, const char *little);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*join_args(char **args);
void				free_all(char **s);
void				free_nodes(t_list **head);
void				error_checker(void);
void				sa(t_list **a);
void				sb(t_list **b);
void				ss(t_list **a, t_list **b);
void				ra(t_list **a);
void				rb(t_list **b);
void				rr(t_list **a, t_list **b);
void				pa(t_list **src, t_list **dest);
void				pb(t_list **dest, t_list **src);
void				rra(t_list **stack_a);
void				rrb(t_list **stack_b);
void				rrr(t_list **stack_a, t_list **stack_b);
void				radix(t_list **a, t_list **b);
void				sort_two(t_list **a);
void				sort_three(t_list **a);
void				sort_four(t_list **a, t_list **b);
void				sort_five(t_list **a, t_list **b);
size_t				ft_strlen(const char *s);
size_t				count_word(char *s, char c);
t_list				*create_node(int content, int id);
t_list				*link_nodes(t_list **head, t_list *node);
t_list				*stack(long *p);

#endif

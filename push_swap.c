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

int    main(int argc, char **argv)
{
    char	*joined_args;
    long	*p;
    t_list	*stack_a;
    t_list	*stack_b;

    if (argc < 2)
        return (0);
    joined_args = join_args(argv);
    if (!joined_args)
        return (write(2, "Error\n", 6), 1);
    p = valide(joined_args);
    free(joined_args);
    if (!p)
        return (write(2, "Error\n", 6), 1);
    stack_a = stack(p);
    free(p);
    if (!stack_a)
        return (write(2, "Error\n", 6), 1);
    stack_b = NULL;
    sort(&stack_a, &stack_b);
    free_nodes(&stack_a);
    free_nodes(&stack_b);
    return (0);
}
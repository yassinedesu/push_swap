#include "push_swap.h"

#include <stdio.h>

int    main(int argc, char **argv)
{
    char    *joined;
    long    *p;
    t_list  *head;

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
    while (head)
    {
        printf("Value: %d, Index: %d\n", head->value, head->index);
        head = head->next;
    }
    // Further processing with the stack 'head' can be done here
    free_nodes(&head); // Clean up the linked list
    return (0);
}

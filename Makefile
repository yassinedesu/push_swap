# ============================================================================ #
#                                  VARIABLES                                   #
# ============================================================================ #
NAME        = push_swap

CC          = cc
CFLAGS      = -Wall -Wextra -Werror
RM          = rm -f

# ============================================================================ #
#                                SOURCE FILES                                  #
# ============================================================================ #
# Rules
SRCS_RULES  = rules/push.c \
              rules/swap.c \
              rules/rotate.c \
              rules/reverse_rotate.c

# Sorting algorithms
SRCS_ALGO   = algo/radix.c \
              algo/sorting.c

# Parsing and validation
SRCS_PARSING = parsing/ft_atoi.c \
               parsing/ft_split.c \
               parsing/ft_strdup.c \
               parsing/ft_strjoin.c \
               parsing/ft_strlen.c \
               parsing/ft_strstr.c \
               parsing/ft_substr.c \
               parsing/free_all.c \
               parsing/indexing.c \
               parsing/join_args.c \
               parsing/check_doubles.c \
               parsing/check_empty.c \
               parsing/is_valid.c

# Utilities
SRCS_UTILS  = utils/create_link_nodes.c \
              utils/error_checker.c \
              utils/free_nodes.c

SRCS        = push_swap.c \
              $(SRCS_RULES) \
              $(SRCS_ALGO) \
              $(SRCS_PARSING) \
              $(SRCS_UTILS)

OBJS        = $(SRCS:.c=.o)

# ============================================================================ #
#                                    RULES                                     #
# ============================================================================ #
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "$(NAME) successfully created."

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiling $<..."

clean:
	$(RM) $(OBJS)
	@echo "Object files removed."

fclean: clean
	$(RM) $(NAME)
	@echo "$(NAME) removed."

re: fclean all

valgrind: $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

.PHONY: all clean fclean re valgrind
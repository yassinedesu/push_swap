# ============================================================================ #
#                                  VARIABLES                                   #
# ============================================================================ #
NAME		= push_swap

CC		= cc
CFLAGS		= -Wall -Wextra -Werror
RM		= rm -f

GREEN		= \033[0;32m
RED		= \033[0;31m
BLUE		= \033[0;34m
YELLOW		= \033[0;33m
RESET		= \033[0m

# ============================================================================ #
#                              FICHIERS SOURCES                                #
# ============================================================================ #
# Règles
SRCS_RULES	= rules/push.c \
			  rules/swap.c \
			  rules/rotate.c \
			  rules/reverse_rotate.c \

# Algorithmes de tri
SRCS_ALGO	= algo/radix.c \
			  algo/sorting.c \

# Parsing et validation
SRCS_PARSING	= parsing/ft_atoi.c \
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
			  parsing/is_valid.c \

# Utilitaires
SRCS_UTILS	= utils/create_link_nodes.c \
			  utils/error_checker.c \
			  utils/free_nodes.c \

SRCS		= push_swap.c \
			  $(SRCS_RULES) \
			  $(SRCS_ALGO) \
			  $(SRCS_PARSING) \
			  $(SRCS_UTILS)

OBJS		= $(SRCS:.c=.o)

# ============================================================================ #
#                                   RÈGLES                                     #
# ============================================================================ #
all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "$(GREEN)✓ $(NAME) créé avec succès !$(RESET)"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(BLUE)Compilation de $<...$(RESET)"

clean:
	@$(RM) $(OBJS)
	@echo "$(YELLOW)✓ Fichiers objets supprimés$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)✓ $(NAME) supprimé$(RESET)"

re: fclean all

.PHONY: all clean fclean re
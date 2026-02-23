NAME = push_swap.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = join_args.c main.c push_swap.c sort.c utils.c
OBJS = $(SRCS:.c=.o)
RM = rm -f

SRCDIR = .
OBJDIR = obj
INCLUDES = -I./

all: $(NAME)
$(NAME): $(OBJS)
	ar rcs $@ $^
%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re
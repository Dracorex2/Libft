CC = cc
FLAGS = -Wall -Wextra -Werror

HEAD_DIR = includes/
SRCS_DIR = srcs/

NAME = libft.a

FILES = $(wildcard *.c)

OBJS = $(FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

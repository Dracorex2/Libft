#CC = cc
#FLAGS = -Wall -Wextra -Werror
#
#HEAD_DIR = includes/
#SRCS_DIR = srcs/
#
#NAME = libft.a
#
#FILES = $(wildcard *.c)
#
#OBJS = $(FILES:.c=.o)
#
#all : $(NAME)
#
#$(NAME) : $(OBJS)
#	ar -rcs $(NAME) $(OBJS)
#
#%.o : %.c
#	$(CC) $(FLAGS) -c $< -o $@
#
#clean :
#	rm -f $(OBJS)
#
#fclean : clean
#	rm -f $(NAME)
#
#re : fclean all
#
#so:
#	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
#	gcc -nostartfiles -shared -o libft.so $(OBJ)
#
#dev:
#	make fclean;cd ../libft-unit-test; make f;cd ../libft; make fclean
#
SRC = *.c
NAME = libft.a
OBJ = ${SRC:.c=.o}
FLAGS = -Wall -Werror -Wextra

all : $(NAME)
	@true

$(NAME) :
	gcc -I $(FLAGS) -c $(FLAGS) $(SRC)
	ar -rcs $(NAME) $(OBJ)

clean :
	rm -f $(NAME)

fclean : clean
	rm -rf $(OBJ)

dev:
	make fclean;git add .; git commit -m 'auto update';git push;cd ../libft-unit-test; make f;cd ../libft; make fclean

re : fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

.PHONY : all clean fclean re dev so
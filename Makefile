NAME = libftprintf.a

SRC =  ft_printf.c ft_printf_utils.c ft_dealing_part_I.c ft_dealing_part_II.c

.PHONY: all clean fclean re

all: ${NAME}

${NAME}: ${SRC}
	gcc -Wall -Werror -Wextra -c $^
	ar -rc libftprintf.a *.o

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all
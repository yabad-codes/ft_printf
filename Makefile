SRCS = 	ft_printf.c ft_putchar.c ft_puthexa.c \
		ft_putnbr.c ft_putnbru.c ft_putptr.c \
		ft_putstr.c check_args.c

OBJS = ${SRCS:.c=.o}

GCC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar rc

RANLIB = ranlib

NAME = libftprintf.a

%.o: %.c
	${GCC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${AR} ${NAME} $^
	${RANLIB} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
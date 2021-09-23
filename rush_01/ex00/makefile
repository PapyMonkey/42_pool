SRCS		= main.c ft_math.c ft_put.c ft_show.c ft_split.c ft_tab.c ft_utility.c ft_errors.c ft_check.c ft_autocomplete.c ft_smallgrid.c ft_height.c ft_voidfiller.c ft_solve.c ft_zero_inter.c
OBJS		= ${SRCS:.c=.o}
NAME		= rush-01

CC			= cc
CFLAGS		= -Wall -Werror -Wextra

RM			= rm -f

.c.o:		
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}
			${RM} a.out

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

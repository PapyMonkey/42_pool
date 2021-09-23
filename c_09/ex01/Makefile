NAME			= libft.a

SRCS			= ${SRCS_FILES:%.c=${SRCS_PATH}/%.c}
SRCS_PATH		= srcs
SRCS_FILES		= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
HDRS			= ${HDRS_FILES:%.h=${HDRS_PATH}/%.h}
HDRS_PATH		= includes
HDRS_SRC		= ft.h
OBJS			= ${SRCS_FILES:%.c=${SRCS_PATH}/%.o}



CC				= gcc
CFLAGS			= -Wall -Wextra -Werror
RM				= rm -f



all:			${NAME}


${NAME}:		${OBJS}
				ar rc ${NAME} ${OBJS}

${OBJS}:		${SRCS}
				${CC} ${CFLAGS} -c $< -o $@ -I${HDRS_PATH}

clean:		
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY:			all clean fclean re

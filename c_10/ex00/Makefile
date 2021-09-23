NAME				?= ft_display_file

CC					= gcc
CFLAGS				?= -Wall -Wextra -Werror
RM					?= rm -f
MKDIR				?= mkdir -p

SRCS_PATH			:= srcs
OBJS_PATH			:= obj
HDRS_PATH			:= includes

SRCS_NAME			:= 	main.c\
						ft_put.c\
						ft_errors.c
OBJS_NAME 			:= $(SRCS_NAME:.c=.o)
HDRS_NAME			:= head.h

SRCS				:= $(addprefix $(SRCS_PATH)/,$(SRCS_NAME))
OBJS				:= $(addprefix $(OBJS_PATH)/,$(OBJS_NAME))
HDRS				:= $(addprefix $(HDRS_PATH)/,$(HDRS_NAME))

# -----------------------------------------------------------------------------

all:				$(NAME)

$(NAME):			$(OBJS)
					$(CC) $^ -o $@

$(OBJS_PATH)/%.o: 	$(SRCS_PATH)/%.c $(HDRS)
					$(MKDIR) $(OBJS_PATH)
					$(CC) -o $@ -c $< -I $(HDRS_PATH) $(CFLAGS) 
clean:		
					$(RM) a.out
					$(RM) $(OBJS)

fclean:				clean	
					$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re

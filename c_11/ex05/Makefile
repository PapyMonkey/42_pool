NAME				?= do-op

CC					= gcc
CFLAGS				?= -Wall -Wextra -Werror -g
RM					?= rm -f
MKDIR				?= mkdir -p

SRCS_PATH			:= src
HDRS_PATH			:= hdr
OBJS_PATH			:= obj

SRCS_NAME			:= 	ft_atoi.c\
						ft_put.c\
						ft_ope.c\
						ft_str_manip.c\
						main.c
OBJS_NAME 			:= $(SRCS_NAME:.c=.o)
HDRS_NAME			:= lib.h

SRCS				:= $(addprefix $(SRCS_PATH)/,$(SRCS_NAME))
OBJS				:= $(addprefix $(OBJS_PATH)/,$(OBJS_NAME))
HDRS				:= $(addprefix $(HDRS_PATH)/,$(HDRS_NAME))

# -----------------------------------------------------------------------------

all:				$(NAME)
					
$(NAME):			$(OBJS)
					@$(CC) $^ -o $@

$(OBJS_PATH)/%.o: 	$(SRCS_PATH)/%.c $(HDRS)
					@$(MKDIR) $(OBJS_PATH)
					@$(CC) -o $@ -c $< -I $(HDRS_PATH) $(CFLAGS)

clean:		
					@$(RM) a.out
					@$(RM) -r $(OBJS_PATH)
					@$(RM) $(OBJS)

fclean:				clean	
					@$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re

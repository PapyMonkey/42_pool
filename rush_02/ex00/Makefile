NAME				?= rush-02

CC					= gcc
CFLAGS				?= -Wall -Wextra -Werror -g
RM					?= rm -f
MKDIR				?= mkdir -p

SRCS_PATH			:= src
HDRS_PATH			:= hdr
OBJS_PATH			:= obj

SRCS_NAME			:= 	ft_convert.c\
						ft_digitreader.c\
						ft_errors.c\
						ft_group_three.c\
						ft_len.c\
						ft_putstr.c\
						ft_read.c\
						ft_split_v2.c\
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
					@echo "Complete."

$(OBJS_PATH)/%.o: 	$(SRCS_PATH)/%.c $(HDRS)
					@$(MKDIR) $(OBJS_PATH)
					$(CC) -o $@ -c $< -I $(HDRS_PATH) $(CFLAGS)

clean:		
					@$(RM) a.out
					@$(RM) -r $(OBJS_PATH)
					@$(RM) $(OBJS)
					@echo "Object files successfully deleted."

fclean:				clean	
					@$(RM) $(NAME)
					@echo "Binary files successfully deleted."


re:					fclean all

.PHONY:				all clean fclean re

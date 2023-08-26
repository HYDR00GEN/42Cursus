SRCS	= 	exemp.c \ exempb.c


BONUS	= 	ft_lstnew.c			\
 			ft_lstadd_front.c 	\
			ft_lstsize.c		\
			ft_lstlast.c 		\
			ft_lstadd_back.c	\
			ft_lstclear.c		\
			ft_lstdelone.c		\
			ft_lstiter.c		\
			ft_lstmap.c			\

OBJS	= $(SRCS:.c=.o)

B_OBJS	= $(BONUS:.c=.o)

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -I.

NAME	= libftprintf.a

all:	$(NAME)

$(NAME):	$(OBJS)
					ar rcs $(NAME) $(OBJS)

clean:	
	$(RM) $(OBJS) $(B_OBJS)

fclean: 	clean
					$(RM) $(NAME)

re:			fclean $(NAME)

bonus:		$(OBJS)	$(B_OBJS)
					ar rcs $(NAME) $(OBJS) $(B_OBJS)

.PHONY:		all clean fclean re bonus
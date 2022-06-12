NAME	= philo_mutex
CC		= gcc -g
CFLAG	= -Werror -Wall -Wextra
SRCS 	=	srcs/init.c		\
			srcs/main.c		\
			srcs/philo.c 	\
			srcs/print.c 	\
			srcs/thread.c 	\
			srcs/util.c

OBJS 	= ${SRCS:.c=.o}

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAG) $(OBJS) -o $(NAME)

.c.o:
	$(CC) $(CFLAG) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
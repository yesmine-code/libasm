NAME = libasm.a

SRCS = ${wildcard srcs/*.s}

INCLUDES 	= includes

OBJS		= ${SRCS:.s=.o}

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

NASM		= nasm

NFLAGS 		=  -f elf64

RM			= rm -f

%.o: %.s
	$(NASM) $(NFLAGS) $<

all: 			$(NAME)

$(NAME) : $(OBJS)
		ar rcs $(NAME) $(OBJS)
				
clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY:			all clean fclean re
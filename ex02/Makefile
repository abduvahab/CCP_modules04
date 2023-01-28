NAME =ex02
GCC = g++
CFLAGS =-Wall -Wextra -Werror -std=c++98

SRCS =main.cpp A_animal.cpp Brain.cpp

OBJS = ${SRCS:.cpp=.o}

all: $(NAME)

$(NAME) : $(OBJS)
			$(GCC) $(CFALGS) -o $@ $^

.cpp.o:
			$(GCC) $(CFALGS) -c -o $@ $<

clean:
	 rm -rf $(OBJS)

fclean:clean
		rm -rf $(NAME)

re : clean fclean all

.PHONEY: re clean fclean all


# Name
NAME	=	a.out

# Compilation
CC		=	c++
FLAGS	=	$(WFLAGS) $(STDFLAG)
WFLAGS	=	-Wall -Wextra -Werror
STDFLAG	=	-std=c++98

# Folders and Sources
SRCS	=	main.cpp\
			Fixed.cpp\
			Point.cpp\
			bsp.cpp\

$(NAME):	$(SRCS)
		@$(CC) $(FLAGS) -o $@ $^

all:	$(NAME)

clean:

fclean:	clean
		rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re
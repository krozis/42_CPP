# Name
NAME		=	EXEC

#Colors
R			=	"\033[31m"
G			=	"\033[32m"
X			=	"\033[0m"
BOLD		=	"\033[1m"
UP			=	"\033[A"
CUT			=	"\033[K"

# Compilation
CC		=	c++
FLAGS	=	$(WFLAGS) $(STDFLAG)
WFLAGS	=	-Wall -Wextra -Werror
STDFLAG	=	-std=c++98

# Folders and Sources
SRC		=	main_figures.cpp\
			Figure.cpp\
			Triangle.cpp\

OBJ	=	$(SRC:.cpp=.o)

all:	$(NAME)

%.o:	%.cpp
		@$(CC) $(FLAGS) -o $@ -c $<

$(NAME):	$(OBJ)
		@$(CC) $(FLAGS) -o $@ $^

clean:

fclean:	clean
		@rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re
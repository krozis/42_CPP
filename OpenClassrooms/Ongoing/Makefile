# Name
NAME		=	EXEC

#Colors
R			=	"\e[31m"
G			=	"\e[32m"
X			=	"\e[0m"
BOLD		=	"\e[1m"
UP			=	"\e[A"
CUT			=	"\e[K"

# Compilation && commands
CC		=	c++
FLAGS	=	$(WFLAGS) $(STDFLAG)
WFLAGS	=	-Wall -Wextra -Werror
STDFLAG	=	-std=c++98
RM		=	rm -rf

# Folders and Sources
SRC		=	main.cpp\
			Vehicule.cpp\
			Car.cpp\
			Moto.cpp\


OBJ	=	$(SRC:.cpp=.o)

all:	$(NAME)

%.o:	%.cpp
		@$(CC) $(FLAGS) -o $@ -c $<

$(NAME):	$(OBJ)
		@$(CC) $(FLAGS) -o $@ $^

clean:
		@$(RM) $(OBJ)

fclean:	clean
		@$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
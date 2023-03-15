# Name
NAME	=	animals_with_brain

#Colors
R			=	"\e[31m"
G			=	"\e[32m"
X			=	"\e[0m"
BOLD		=	"\e[1m"

# Compilation
CC		=	c++
FLAGS	=	$(WFLAGS) $(STDFLAG)
WFLAGS	=	-Wall -Wextra -Werror
STDFLAG	=	-std=c++98
RM		=	rm -rf

# Folders and Sources
SRCS	=	main.cpp\
			Animal.cpp\
			Dog.cpp\
			Cat.cpp\
			Brain.cpp\

OBJ		=	$(SRCS:.cpp=.o)

%.o:	%.cpp %.hpp
		@$(CC) $(FLAGS) -o $@ -c $<

$(NAME):	$(OBJ)
		@$(CC) $(FLAGS) -o $@ $^
		@echo $(G)$(BOLD)$(NAME) $(X)$(G)created$(X)

all:	$(NAME)

clean:
		@$(RM) $(OBJ);
		@echo $(R)Object files removed $(X)

fclean:	clean
		@$(RM) $(NAME)
		@echo $(R)$(BOLD)$(NAME) $(X)$(R)removed $(X)

re:	fclean all

.PHONY: all clean fclean re
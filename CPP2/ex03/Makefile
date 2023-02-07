# Name
NAME	=	a.out

#Colors
R			=	"\033[31m"
G			=	"\033[32m"
X			=	"\033[0m"
BOLD		=	"\033[1m"

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

OBJ		=	$(SRCS:.cpp=.o)

%.o:%.cpp
	@$(CC) $(FLAGS) -o $@ -c $<

$(NAME):	$(OBJ)
		@$(CC) $(FLAGS) -o $@ $^
		@echo $(G)$(BOLD)$(NAME) $(X)$(G)created$(X)

all:	$(NAME)

clean:
		@rm -rf $(OBJ);
		@echo $(R)Object files removed $(X)

fclean:	clean
		@rm -rf $(NAME)
		@echo $(R)$(BOLD)$(NAME) $(X)$(R)removed $(X)

re:	fclean all

.PHONY: all clean fclean re
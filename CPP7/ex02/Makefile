# Name
NAME	=	array

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

SRCS_42	=	main_42.cpp\

OBJ		=	$(SRCS:.cpp=.o)
OBJ_42	=	$(SRCS_42:.cpp=.o)

%.o:	%.cpp
		@$(CC) $(FLAGS) -o $@ -c $<

$(NAME):	$(OBJ)
		@$(CC) $(FLAGS) -o $@ $^
		@echo $(G)$(BOLD)$(NAME) $(X)$(G)created$(X)

42:		$(OBJ_42)
		@$(CC) $(FLAGS) -o $(NAME) $^
		@echo $(G)$(BOLD)$(NAME) $(X)$(G)with tests form 42 created$(X)

all:	$(NAME)

clean:
		@$(RM) $(OBJ);
		@echo $(R)Object files removed $(X)

fclean:	clean
		@$(RM) $(NAME)
		@$(RM) main_42.o
		@echo $(R)$(BOLD)$(NAME) $(X)$(R)removed$(X)

re:	fclean all

.PHONY: all clean fclean re
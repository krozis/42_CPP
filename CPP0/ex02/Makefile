# Name
NAME	=	global_banksters

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
SRCS	=	tests.cpp\
			Account.cpp\

# Rules
$(NAME):	$(SRCS)
		@$(CC) $(FLAGS) -o $@ $^
		@echo $(G)$(BOLD)$(NAME) $(X)$(G)created$(X)

all:	$(NAME)

clean:

fclean:	clean
		@rm -rf $(NAME)
		@echo $(R)$(BOLD)$(NAME) $(X)$(R)removed $(X)

re:	fclean all

.PHONY: all clean fclean re
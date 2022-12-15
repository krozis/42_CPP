# Name
NAME	=	EXEC

# Compilation
CC		=	c++
FLAGS	=	$(WFLAGS) $(STDFLAG)
WFLAGS	=	-Wall -Wextra -Werror
STDFLAG	=	-std=c++98

# Folders and Sources
SRCS	=	test.cpp\
			Personnage.cpp\
			Weapon.cpp\


$(NAME):	$(SRCS)
		@$(CC) $(FLAGS) -o $@ $^

all:	$(NAME)

clean:

fclean:	clean
		rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re
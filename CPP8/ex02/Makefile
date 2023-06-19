# Name
NAME	=	mutant_stack

#Colors
R			=	"\e[31m"
G			=	"\e[32m"
X			=	"\e[0m"
BOLD		=	"\e[1m"

# Compilation
CXX			=	c++
FLAGS		=	$(CPPFLAGS) $(CXXFLAGS) $(STDFLAG)
CPPFLAGS	=	-MMD
CXXFLAGS	=	-Wall -Wextra -Werror
STDFLAG		=	-std=c++98
RM			=	rm -rf

# Folders and Sources
SRCS	=	main.cpp\

OBJ		=	$(SRCS:.cpp=.o)
DEP		=	$(OBJ:.o=.d)

%.o:	%.cpp
		@$(CXX) $(FLAGS) -o $@ -c $<

$(NAME):	$(OBJ)
		@$(CXX) $(FLAGS) -o $@ $^
		@echo $(G)$(BOLD)$(NAME) $(X)$(G)created$(X)

all:	$(NAME)

clean:
		@$(RM) $(OBJ)
		@$(RM) $(DEP)
		@echo $(R)Object files removed $(X)

fclean:	clean
		@$(RM) $(NAME)
		@echo $(R)$(BOLD)$(NAME) $(X)$(R)removed $(X)

re:	fclean
	@$(MAKE)  --no-print-directory all

test:	$(NAME)
		./$(NAME)

-include $(DEP)

.PHONY: all clean fclean re test
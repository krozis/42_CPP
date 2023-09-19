# Name
NAME	=	PmergeMe

#Colors
ifeq ($(OS),Windows_NT)
	R		=	""
	G		=	""
	X		=	""
	BOLD	=	""
else
	R		=	"\e[31m"
	G		=	"\e[32m"
	X		=	"\e[0m"
	BOLD	=	"\e[1m"
endif

# Compilation
CXX			=	c++
FLAGS		=	$(STDFLAG) $(CXXFLAGS) $(CPPFLAGS)
CPPFLAGS	=	-MMD
CXXFLAGS	=	-Wall -Wextra -Werror
STDFLAG		=	-std=c++98

ifeq ($(OS),Windows_NT)
	RM	=	del /q
else
	RM	=	rm -rf
endif

# Folders and Sources
SRCS	=	main.cpp\
			PmergeMe.cpp\

OBJ_DIR	=	obj
OBJ		=	$(addprefix $(OBJ_DIR)/,$(SRCS:.cpp=.o))
DEP		=	$(OBJ:.o=.d)

$(OBJ_DIR)/%.o: %.cpp
		@mkdir -p $(dir $@)
		@$(CXX) $(FLAGS) -o $@ -c $<

$(NAME):	$(OBJ)
		@$(CXX) $(FLAGS) -o $@ $^
		@echo $(G)$(BOLD)$(NAME) $(X)$(G)created$(X)

all:	$(NAME)

clean:
		@$(RM) $(OBJ_DIR)
		@echo $(R)Object files directory removed $(X)

fclean:	clean
		@$(RM) $(NAME)
		@echo $(R)$(BOLD)$(NAME) $(X)$(R)removed $(X)

re:	fclean
	@$(MAKE)  --no-print-directory all

test:	$(NAME)
		./$(NAME) input.txt

-include $(addprefix $(OBJ_DIR)/,$(DEP))

.PHONY: all clean fclean re test
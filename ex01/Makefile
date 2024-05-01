LIGHT_CYAN = \033[36m
LIGHT_GREEN = \033[32m
LIGHT_RED = \033[31m
RESET = \033[0m

SRC = PhoneBook.cpp Contact.cpp main.cpp AddPrompt.cpp SearchPrompt.cpp
OBJ = $(SRC:.cpp=.o)
NAME = phonebook
FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
CC = c++

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "$(LIGHT_GREEN)$(NAME) was created!$(RESET)"

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "$(LIGHT_CYAN)Compiling $<$(RESET)"

clean:
	@rm -f $(OBJ)
	@echo "$(LIGHT_RED)$(NAME) objects were deleted!$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(LIGHT_RED)$(NAME) was deleted!$(RESET)"

re: fclean all

.PHONY: all clean fclean re
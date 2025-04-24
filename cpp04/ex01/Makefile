SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
NAME = Animal
TRASH_DIR = .trash

OBJ = $(addprefix $(TRASH_DIR)/, $(SRC:.cpp=.o))
DEP = $(addprefix $(TRASH_DIR)/, $(SRC:.cpp=.d))

FLAGS = -std=c++98 -Wall -Werror -Wextra -g -MMD -MP
CC = c++

-include $(DEP)

$(TRASH_DIR):
	@mkdir -p $(TRASH_DIR)

$(TRASH_DIR)/%.o: %.cpp | $(TRASH_DIR)
	$(CC) $(FLAGS) -c $< -o $@ -MT $@ -MF $(@:.o=.d)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(TRASH_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
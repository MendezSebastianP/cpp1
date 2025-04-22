SRC = main.cpp Character.cpp I_Character.cpp I_MateriaSource.cpp MateriaSource.cpp \
      Materias/A_Materia.cpp Materias/Cure.cpp Materias/Ice.cpp
NAME = Characters
TRASH_DIR = .trash

OBJ = $(addprefix $(TRASH_DIR)/, $(SRC:.cpp=.o))
DEP = $(addprefix $(TRASH_DIR)/, $(SRC:.cpp=.d))

FLAGS = -std=c++98 -Wall -Werror -Wextra -g -MMD -MP
CC = c++

-include $(DEP)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(TRASH_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(FLAGS) -c $< -o $@ -MT $@ -MF $(@:.o=.d)

clean:
	rm -rf $(TRASH_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

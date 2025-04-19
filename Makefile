CFLAGS = -Wall -Wextra -Werror -g

MAIN_FILE = main_tests.c

PRINT_FUNCTION = print_result.c

SRC_FILES = ft_isalpha_test.c \
			ft_isdigit_test.c \
			ft_isalnum_test.c \
			ft_isascii_test.c \
			ft_isprint_test.c \
			ft_strlen_test.c \
			ft_memset_test.c \

OBJ_FILES = $(SRC_FILES:.c=.o)

NAME = test

SRC_FOLDER = ./srcs

BUILD_FOLDER = ./srcs/build

$(NAME): $(addprefix $(BUILD_FOLDER)/, $(OBJ_FILES)) tests.h $(PRINT_FUNCTION)
	cc $(CFLAGS) -o $@ $(MAIN_FILE) $^ -L.. -lft

$(BUILD_FOLDER)/%.o: $(SRC_FOLDER)/%.c
	@mkdir -p $(BUILD_FOLDER) 
	cc $(CFLAGS) -o $@ -c $^

clean:
	rm -rf $(BUILD_FOLDER)/*.o

fclean:
	rm -rf $(BUILD_FOLDER)

re: fclean all

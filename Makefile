CFLAGS = -Wall -Wextra -Werror -g

SRC_FILES = main_tests.c \
			print_result.c \
			ft_isalpha_test.c \
			ft_isdigit_test.c \
			ft_isalnum_test.c \
			ft_isascii_test.c \
			ft_isprint_test.c \
			ft_strlen_test.c \
			ft_memset_test.c \
			ft_bzero_test.c \
			ft_memcpy_test.c \
			ft_memmove_test.c \
			ft_strlcpy_test.c \
			ft_strlcat_test.c \
			ft_lstnew_test.c \
			ft_lstadd_front_test.c \
			ft_lstsize_test.c \
			ft_lstlast_test.c \
			ft_lstadd_back_test.c

OBJ_FILES = $(SRC_FILES:.c=.o)

NAME = test

SRC_FOLDER = ./srcs

BUILD_FOLDER = ./srcs/build

$(NAME): $(addprefix $(BUILD_FOLDER)/, $(OBJ_FILES)) 
	cc $(CFLAGS) -o $@ $^ -L.. -lft

$(BUILD_FOLDER)/%.o: $(SRC_FOLDER)/%.c
	@mkdir -p $(BUILD_FOLDER) 
	cc $(CFLAGS) -o $@ -c $^

re: fclean $(NAME)

clean:
	rm -rf $(BUILD_FOLDER)/*.o

fclean:
	rm -rf $(BUILD_FOLDER)

NAME = fdf

SRCS = bresen_possibility.c draw_palette.c draw_palette_2.c exp_draw.c \
	   ft_color.c ft_get_number_of_word.c ft_init.c ft_parsing.c \
	   key_and_direction.c main.c mouse_hook.c mouse_hook_2.c img_pixel_put.c

OBJECT = $(SRCS:.c=.o)

$(NAME): 
		make -C libft/
		gcc -o $(NAME) -Wall -Werror -Wextra -lmlx -framework OpenGL \
		-framework Appkit $(SRCS) libft/libft.a
all: $(NAME)

clean:
	rm -f $(OBJECT)
	make -C libft/ clean

fclean: clean
	rm -f $(NAME)
	make -C libft/ fclean

re: fclean all
	make -C libft/ re
	make

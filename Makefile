NAME = remi

SRC_FILES = \
	main.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memccpy.c

OBJ_FILES = main.o ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o

#################################################################################

all: ${NAME}

${NAME}: $(OBJ_FILES)
	gcc ${OBJ_FILES} -o ${NAME}

%.o: %.c
	gcc -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re

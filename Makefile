##
## EPITECH PROJECT, 2017
## Project BSQ
## File description:
## Build BSQ binary.
##

CC	=	gcc

CFLAGS	=	-Wextra -W -Wall -Werror -I ./include/

LIB	=	-L lib/ -lmy

SRC	=	src/main.c		\
		src/info_file.c		\
		src/management.c	\
		src/create_map.c	\
		src/bsq.c

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my/
	$(CC) $(OBJ) $(CFLAGS) $(LIB) -o $(NAME)
	rm -f $(OBJ)
	make clean -C lib/my/

clean:
	rm -f $(OBJ)
	make clean -C lib/my/

fclean: clean
	rm -f $(NAME)
	make fclean -C lib/my/

re: fclean all

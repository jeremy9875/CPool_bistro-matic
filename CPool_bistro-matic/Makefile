##
## Makefile for bistro-matic in /home/jeremy.el-kaim/CPool_bistro-matic
## 
## Made by jeremy elkaim
## Login   <jeremy.el-kaim@epitech.net>
## 
## Started on  Mon Oct 31 09:33:26 2016 jeremy elkaim
## Last update Sun Nov  6 10:16:34 2016 jeremy elkaim
##

NAME    = calc

SRC    =	libtemp.c	\
		calc.c		\

OBJ    = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		gcc $(OBJ) -o $(NAME) -g

clean:
		rm -rf $(OBJ)

fclean:			clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:			all clean fclean re

##
## Makefile for  in /home/baptiste/rendu/is_ip
## 
## Made by 
## Login   <baptiste.heraud@epitech.eu>
## 
## Started on  Sat May  7 10:04:48 2016 
## Last update Sat May  7 10:14:26 2016 
##

NAME	:=	is_ip

SRC	:=	main.c \
		is_ip.c \
		strtoword.c

INC_DIR	:=	include

CC	:=	cc

OBJ	:=	$(SRC:.c=.o)

LIB	:=	-I./include/

CFLAGS  :=	-Wall -Wextra -W -pedantic -ansi

CFLAGS	+=	-I$(INC_DIR)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIB)

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:		fclean all

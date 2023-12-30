# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/07 00:18:05 by pruiz-ca          #+#    #+#              #
#    Updated: 2021/08/22 12:02:33 by pruiz-ca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL		=	/bin/bash

NAME		=	karenFilter

S			=	src/
O			=	obj/
I			=	inc/

NOCOL		=	\033[0m
GRN			=	\033[0;32m
ORG			=	\033[0;33m
BLU			=	\033[0;34m
CYN			=	\033[0;36m
YEL			=	\033[1;33m
PUR			=	\033[1;32m

SRCS		=	main.cpp Karen.cpp
OBJS		=	$(SRCS:%.cpp=%.o)

HEADER		=	-I $I

CC			=	clang++

FLAGS		=	-Wall -Wextra -Werror

ECHO		=	echo -e

all:			$(NAME)

$(NAME):		$(OBJS)
				@$(ECHO) -n "$(ORG)Compiling $(NAME)...$(NOCOL)"
				@$(CC) $(FLAGS) $(SRCS) $(HEADER) -o $(NAME)
				@$(ECHO) "$(PUR) => Success!$(NOCOL)"

%.o: 			%.cpp
				@$(CC) $(CFLAGS) -c $< $(HEADER) -o $@

clean:
				@rm -f $(OBJS)

fclean:			clean
				@rm -f $(NAME)
				@find . -name ".DS_Store" -delete
				@find . -name "test" -delete
				@find . -name "test.replace" -delete

re:				fclean all

.PHONY:			all clean fclean re

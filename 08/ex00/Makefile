# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pruiz-ca <pruiz-ca@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/07 00:18:05 by pruiz-ca          #+#    #+#              #
#    Updated: 2021/08/27 18:04:41 by pruiz-ca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL		=	/bin/bash

NAME		=	a.out

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

SRCS		=	main.cpp

OBJS		=	$(SRCS:.cpp=.o)

HEADER		=	-I.

CXX			=	clang++ -std=c++98

CXXFLAGS	=	-Wall -Wextra -Werror $(HEADER)

ECHO		=	echo -e

all:			$(NAME)

$(NAME):		$(OBJS)
				@$(ECHO) -n "$(ORG)Compiling $(NAME)...$(NOCOL)"
				@$(CXX) $(CXXFLAGS) $^ -o $@
				@$(ECHO) "$(PUR) => Success!$(NOCOL)"

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)
				@find . -name ".DS_Store" -delete

re:				fclean all

.PHONY:			all clean fclean re

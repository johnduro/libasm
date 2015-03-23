#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mle-roy <mle-roy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/21 18:51:12 by mle-roy           #+#    #+#              #
#    Updated: 2015/03/21 18:52:15 by mle-roy          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=	libTester
NAMED		=	libasm

SRCS		=	$(wildcard *.s)
SRCS_C		=	mainV2.c

OBJS		=	$(SRCS:.s=.o)

NASM		=	~/.brew/bin/nasm
NASMFLAGS	=	-f macho64

RM			=	rm -f
OK			=	"\033[35m"OK"\033[00m"

all: $(NAMED) $(NAME)

$(NAMED): $(OBJS)
	@echo "Compiling" [ $(NAME) ] "..." $(OK)

$(NAME):
	gcc -w $(OBJS) $(SRCS_C) -o $(NAME)


%.o: %.s
	$(NASM) $(NASMFLAGS) -o $@ $<

clean:
	rm -f $(OBJS)
	@echo "Cleaning" [ $(NAME) ] "..." $(OK)

fclean: clean
	rm -f $(NAME)
	@echo "Delete" [ $(NAME) ] "..." $(OK)

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lramovha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/31 14:36:48 by lramovha          #+#    #+#              #
#    Updated: 2019/05/31 14:54:04 by lramovha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS  = -Wall -Westra -Werror
AR      = ar rc
RANLIB  = ranlib

NAME    = libft.a
HEAD    = libdt.h
SRCS    = ft_*

OBJS    = $(SRCS:.c=.o)

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME):
		@$(CC) $(CFLAGS) -c $(SRCS)
		@$(AR) $(NAME) $(OBJS)
		@$(RANLIB) $(NAME)
		@echo "[INFO] Library [$(NAME)] created!"

clean:
		@rm -f $(OBJS)
		@echo "[INFO] Objects removed!"

fclean: clean
		@rm -f $(NAME)
		@echo "[INFO] Library [$(NAME)] removed"

re:		fclean all

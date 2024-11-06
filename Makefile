# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 17:55:55 by soochoi           #+#    #+#              #
#    Updated: 2024/11/06 17:48:40 by soochoi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT_DIR = ./libft
LIBFT = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = -rcs
NAME = libftprintf.a
SRCS = ft_printf.c ft_printf_format.c ft_printf_format_specifiers_1.c\
	   \
OBJS = $(SRCS:.c=.o)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $<

all : $(NAME)

$(NAME) : $(OBJS) $(LIBFT)
	$(AR) $(ARFLAGS) $@ $^

$(LIBFT) :
	$(MAKE) -C $(LIBFT_DIR) $@

clean :
	rm -rf $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean : clean
	rm -rf $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re : fclean all

.PHONY : all clean fclean re

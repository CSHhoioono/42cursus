# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: soochoi <soochoi@student.42gyeongsan.      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 17:55:55 by soochoi           #+#    #+#              #
#    Updated: 2024/11/07 19:20:00 by soochoi          ###   ########.fr        #
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
SRCS_B = ft_printf_format_bonus.c
OBJS = $(SRCS:.c=.o)
OBJS_B = $(SRCS_B:.c=.o)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $<

all : $(NAME)

bonus : all

$(NAME) : $(OBJS) $(OBJS_B) $(LIBFT)
	$(AR) $(ARFLAGS) $@ $^

$(LIBFT) :
	$(MAKE) -C $(LIBFT_DIR) $@

clean :
	rm -rf $(OBJS) $(OBJS_B)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean : clean
	rm -rf $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re : fclean all

.PHONY : all clean fclean re bonus

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: senayat <senayat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 22:45:48 by senayat           #+#    #+#              #
#    Updated: 2024/04/22 22:04:33 by senayat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_printf.c	ft_puts.c	ft_putc.c	\
			ft_putp.c	ft_putd.c	ft_putx.c	\
			ft_putu.c

OBJS		=	$(SRCS:.c=.o)

BONUS		=	

BONUS_OBJS	=	$(BONUS:.c=.o)

CC		= gcc
RM		= rm -f
CFLAGS		= -Wall -Wextra -Werror -I.

NAME		= libftprintf.a


all:		$(NAME)

$(NAME):	$(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:		all clean fclean re


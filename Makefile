# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/22 10:15:01 by amokgohl          #+#    #+#              #
#    Updated: 2018/08/26 16:15:46 by amokgohl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC = ft_atoi.c \
	  ft_atoibase.c \
	  ft_itoa.c \
	  ft_itoabase.c \
	  ft_nblen.c \
	  ft_putchar.c \
	  ft_putnstr.c \
	  ft_putstr.c \
	  ft_strchr.c \
	  ft_strcjoin.c \
	  ft_strclr.c \
	  ft_strcmp.c \
	  ft_itoalong_u.c \
	  ft_strcpy.c \
	  ft_strdup.c \
	  ft_strjoin.c \
	  ft_strlen.c \
	  ft_strnew.c \
	  ft_strrev.c \
	  ft_strsub.c \
	  ft_toupper.c \
	  ft_length_lu.c \
	  ft_itoaspec.c \
	  ft_printf.c \
	  ft_check.c \
	  ft_strtoupper.c \
	  ft_check.c \
	  ft_testtype.c \
	  ft_specs.c \
	  ft_all.c \
	  ft_flags.c \
	  ft_inttest.c \
	  ft_bintoa.c \
	  ft_tests.c \
	  ft_nblen_base.c \
	  ft_strncpy.c \
	  ft_strndup.c \
	  ft_solution.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) created"
	@ranlib $(NAME)
	@echo "$(NAME) indexed"

%.o: %.c
	@gcc $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJ)
	
fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re

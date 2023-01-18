# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gacastil <gacastil@student.42porto.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 18:06:19 by gacastil          #+#    #+#              #
#    Updated: 2023/01/18 14:42:43 by gacastil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a
SRC = ft_printf.c

CC = cc
RM = rm -rf
CFLAG = -Wall -Wextra -Werror
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
		@$(AR) $(NAME) $(OBJ)

clean:
		@$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
		@$(RM) $(NAME)

re: fclean all
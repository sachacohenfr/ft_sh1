#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scohen <scohen@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/20 12:55:26 by scohen            #+#    #+#              #
#    Updated: 2013/12/29 17:45:12 by scohen           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_minishell1

SRC = main.c ft_shell.c ft_exec_function.c ft_exec_builtin.c ft_copy_path.c \
	ft_strsplit.c ft_strlen.c ft_strnew.c ft_strsub.c ft_putslash.c \
	ft_strcpy.c ft_strjoin.c ft_strcmp.c ft_putendl.c

OBJECT = $(SRC:.c=.o)


FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC)
	gcc $(FLAGS) -o $(NAME) $(OBJECT)

clean:
	rm -f $(OBJECT)

fclean : clean
	rm -f $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/23 14:02:57 by wweisser          #+#    #+#              #
#    Updated: 2022/04/20 17:58:35 by wweisser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

# SRC = ft_isalpha.o ft_isdigit.o main.o ft_isalnum.o ft_isascii.o\
# 	 ft_isprint.o ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o\
# 	 ft_memmove.o ft_memchr.o ft_memcmp.o ft_toupper.o ft_tolower.o\
# 	 ft_strchr.o ft_strlcat.o ft_strncmp.o ft_strnstr.o ft_strlcpy.o\
# 	 ft_strrchr.o ft_strdup.o ft_substr.o ft_putstr_fd.o ft_putchar_fd.o\
# 	 ft_itoa.o ft_putendl_fd.o

SRC = ft_*.o

all: $(NAME)

$(NAME): $(SRC) libft.h
	ar r $(NAME) $(SRC)

ft_*.o: ft_*.c
	cc -Wall -Wextra -Werror -c ft_*.c

main.o: main.c
	cc -Wall -Wextra -Werror -c main.c

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/23 14:02:57 by wweisser          #+#    #+#              #
#    Updated: 2022/04/06 09:11:34 by wweisser         ###   ########.fr        #
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

# ft_isalpha.o: ft_isalpha.c
# 	cc -Wall -Wextra -Werror -c ft_isalpha.c

# ft_isdigit.o: ft_isdigit.c
# 	cc -Wall -Wextra -Werror -c ft_isdigit.c

# ft_isalnum.o: ft_isalnum.c
# 	cc -Wall -Wextra -Werror -c ft_isalnum.c

# ft_isascii.o: ft_isascii.c
# 	cc -Wall -Wextra -Werror -c ft_isascii.c

# ft_isprint.o: ft_isprint.c
# 	cc -Wall -Wextra -Werror -c ft_isprint.c

# ft_memset.o: ft_memset.c
# 	cc -Wall -Wextra -Werror -c ft_memset.c

# ft_bzero.o: ft_bzero.c
# 	cc -Wall -Wextra -Werror -c ft_bzero.c

# ft_memcpy.o: ft_memcpy.c
# 	cc -Wall -Wextra -Werror -c ft_memcpy.c

# ft_memmove.o: ft_memmove.c
# 	cc -Wall -Wextra -Werror -c ft_memmove.c

# ft_memchr.o: ft_memchr.c
# 	cc -Wall -Wextra -Werror -c ft_memchr.c

# ft_memcmp.o: ft_memcmp.c
# 	cc -Wall -Wextra -Werror -c ft_memcmp.c

# ft_toupper.o: ft_toupper.c
# 	cc -Wall -Wextra -Werror -c ft_toupper.c

# ft_tolower.o: ft_tolower.c
# 	cc -Wall -Wextra -Werror -c ft_tolower.c

# ft_strchr.o: ft_strchr.c
# 	cc -Wall -Wextra -Werror -c ft_strchr.c

# ft_strlen.o: ft_strlen.c
# 	cc -Wall -Wextra -Werror -c ft_strlen.c

# ft_strlcat.o: ft_strlcat.c
# 	cc -Wall -Wextra -Werror -c ft_strlcat.c

# ft_strncmp.o: ft_strncmp.c
# 	cc -Wall -Wextra -Werror -c ft_strncmp.c

# ft_strnstr.o: ft_strnstr.c
# 	cc -Wall -Wextra -Werror -c ft_strnstr.c

# ft_strlcpy.o: ft_strlcpy.c
# 	cc -Wall -Wextra -Werror -c ft_strlcpy.c

# ft_strrchr.o: ft_strrchr.c
# 	cc -Wall -Wextra -Werror -c ft_strrchr.c

# ft_strdup.o: ft_strdup.c
# 	cc -Wall -Wextra -Werror -c ft_strdup.c

# ft_substr.o: ft_substr.c
# 	cc -Wall -Wextra -Werror -c ft_substr.c

# ft_putchar_fd.o: ft_putchar_fd.c
# 	cc -Wall -Wextra -Werror -c ft_putchar_fd.c

# ft_putstr_fd.o: ft_putstr_fd.c
# 	cc -Wall -Wextra -Werror -c ft_putstr_fd.c

# ft_itoa.o: ft_itoa.c
# 	cc -Wall -Wextra -Werror -c ft_itoa.c

# ft_putendl_fd.o: ft_putendl_fd.c
# 	cc -Wall -Wextra -Werror -c ft_putendl_fd.c

main.o: main.c
	cc -Wall -Wextra -Werror -c main.c

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

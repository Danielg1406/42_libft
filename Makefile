# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 10:42:06 by dgomez-a          #+#    #+#              #
#    Updated: 2024/04/22 10:52:04 by dgomez-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
       ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
       ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
       ft_atoi.c ft_calloc.c ft_strdup.c

INCLUDES = -I libft.h

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
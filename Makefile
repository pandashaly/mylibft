# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssottori <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 09:17:44 by ssottori          #+#    #+#              #
#    Updated: 2023/11/30 13:26:23 by ssottori         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
INCLUDE = libft.h
SRC = ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_isalnum.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_strlen.c \
	  ft_strlcat.c \
	  ft_strlcpy.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strncmp.c \
	  ft_memchr.c \
	  ft_strnstr.c \
	  ft_atoi.c \
	  ft_memcmp.c \
	  ft_calloc.c \
	  ft_strdup.c \

OBJ = $(SRC:.c=.o)
SRC_ADD = ft_substr.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_split.c \
		  ft_itoa.c \
		  ft_strmapi.c \
		  ft_striteri.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \

OBJ_ADD = $(SRC_ADD:.c=.o)
SRC_BONUS = ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c \

OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) $(OBJ_ADD)
	ar -rcs $(NAME) $(OBJ) $(OBJ_ADD)
	# -cc - Wall -Wextra -Werror -main.c
	#  ar -rsc -libft.a -main.o

bonus: $(OBJ_BONUS)
	ar -rcs $(NAME) $(OBJ_BONUS)

clean: 
	@echo "Cleaning up obj files"
	rm -f $(OBJ) $(OBJ_ADD) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

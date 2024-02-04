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

NAME = libft.a
CCFLAGS = cc -Wall -Wextra -Werror
INC = inc/
AR = ar -rcs
RM = rm -f
OBJ = $(SRC:.c = .o)

IS = src/ft_is/ft_isalpha.c \
	src/ft_is/ft_isdigit.c \
	src/ft_is/ft_isascii.c \
	src/ft_is/ft_isprint.c \
	src/ft_is/ft_isalnum.c \

MEM = src/ft_mem/ft_memset.c \
	src/ft_mem/ft_bzero.c \
	src/ft_mem/ft_memcpy.c \
	src/ft_mem/ft_memmove.c \
	src/ft_mem/ft_calloc.c \
	src/ft_mem/ft_memchr.c \
	src/ft_mem/ft_memcmp.c \

PUT = src/ft_put/ft_putchar_fd.c \
	src/ft_put/ft_putendl_fd.c \
	src/ft_put/ft_putstr_fd.c \
	src/ft_put/ft_putnbr_fd.c \

STR = src/ft_str/ft_split.c \
	src/ft_str/ft_strchr.c \
	src/ft_str/ft_strdup.c \
	src/ft_str/ft_striteri.c \
	src/ft_str/ft_strjoin.c \
	src/ft_str/ft_strlcat.c \
	src/ft_str/ft_strlcpy.c \
	src/ft_str/ft_strlen.c \
	src/ft_str/ft_strmapi.c \
	src/ft_str/ft_strncmp.c \
	src/ft_str/ft_strnstr.c \
	src/ft_str/ft_strrchr.c \
	src/ft_str/ft_strtrim.c \
	src/ft_str/ft_substr.c \

LST = src/ft_lst/ft_lstnew.c \
	src/ft_lst/ft_lstadd_front.c \
	src/ft_lst/ft_lstsize.c \
	src/ft_lst/ft_lstlast.c \
	src/ft_lst/ft_lstadd_back.c \
	src/ft_lst/ft_lstdelone.c \
	src/ft_lst/ft_lstclear.c \
	src/ft_lst/ft_lstiter.c \
	src/ft_lst/ft_lstmap.c \

TO = src/ft_to/ft_toupper.c \
	src/ft_to/ft_tolower.c \
	src/ft_to/ft_atoi.c \
	src/ft_to/ft_itoa.c \
	src/ft_to/ft_atol.c \

PRINTF = src/ft_printf/ft_printf.c \
	src/ft_printf/utils.c \

GNL = src/ft_gnl/gnl.c \
	src/ft_gnl/gnl_utils.c \

SRCS = $(IS) $(MEM) $(PUT) $(STR) $(LST) $(TO) $(PRINTF) $(GNL)

all: $(NAME)

%.o: %.c libft.h
	$(CCFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean: 
	@echo "Cleaning up obj files"
	$(RM) $(OBJ) $(OBJ_ADD) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

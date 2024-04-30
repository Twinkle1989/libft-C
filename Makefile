# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsolanki <tsolanki@student.hive.fi>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 14:43:43 by tsolanki          #+#    #+#              #
#    Updated: 2024/04/23 14:00:38 by tsolanki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra

# Source and object files
SRCS = ft_isdigit.c ft_strchr.c ft_tolower.c ft_strlcat.c \
       ft_bzero.c ft_isprint.c ft_strlcpy.c ft_toupper.c \
       ft_isalnum.c ft_memcpy.c ft_strlen.c \
       ft_isalpha.c ft_memmove.c ft_strncmp.c \
       ft_isascii.c ft_memset.c ft_strrchr.c ft_memchr.c ft_memcmp.c \
	   ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	   ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	   ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS = ft_listnew_bonus.c ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c \
        ft_lstmap_bonus.c

SRC_OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)

# Program name
NAME = libft.a

# Rule to make everything
all: $(NAME)

# Rule to make the program
$(NAME): $(SRC_OBJS)
	ar rcs $(NAME) $(SRC_OBJS)


# Rule to compile .c to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to clean the object files
clean:
	rm -f $(SRC_OBJS) $(BONUS_OBJS)

# Rule full clean up (object files and library)
fclean: clean
	rm -f $(NAME)

#  Rule to recompile everything
re: fclean all

#rule for bonus file
bonus: $(BONUS_OBJS)
	ar rcs $(NAME) $(SRC_OBJS)  $(BONUS_OBJS)

.PHONY: all clean fclean re bonus



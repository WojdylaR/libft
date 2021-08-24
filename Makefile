HEADER= libft.h

SRCS= ft_atoi.c \
ft_bzero.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memccpy.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_putchar_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_strchr.c \
ft_strdup.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strmapi.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strtrim.c \
ft_substr.c \
ft_tolower.c \
ft_toupper.c \
get_next_line.c \
get_next_line_utils.c \

BONUS= ft_lstnew_bonus.c \
ft_lstadd_front_bonus.c \
ft_lstsize_bonus.c \
ft_lstlast_bonus.c \
ft_lstadd_back_bonus.c \

OBJS= ${SRCS:.c=.o}

OBJSBONUS= ${BONUS:.c=.o}

NAME= libft.a

FLAGS= -Wall -Wextra -Werror

RM= rm -f

all: ${NAME}

%.o: %.c $(HEADER)
	gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJS) $(HEADER)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJSBONUS) $(OBJS) $(HEADER)
	ar rcs $(NAME) $(OBJSBONUS) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(OBJSBONUS)

re: fclean all

.PHONY: re bonus clean fclean

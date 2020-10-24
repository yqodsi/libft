

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

BLACK	= \033[0;30m
RED		= \033[0;31m
GREEN	= \033[0;32m
YELLOW	= \033[0;33m
BLUE	= \033[0;34m
PURPLE	= \033[0;35m
CYAN	= \033[0;36m
GRAY	= \033[0;37m
NC		= \033[0m


AR      = ar rcs

NAME    = libft.a
HEAD    = libft.h

SRCS_DIR	=	./srcs/
OBJ_DIR		=	./objs/
INC_DIR		=	./includes/

SRCS    = ft_memmove.c ft_strchr.c ft_strnstr.c \
		  ft_atoi.c ft_isprint.c ft_memset.c ft_strdup.c ft_strrchr.c \
		  ft_bzero.c ft_memalloc.c ft_strjoin.c ft_strtrim.c \
		  ft_calloc.c ft_itoa.c ft_putchar_fd.c ft_strlcat.c ft_substr.c \
		  ft_isalnum.c ft_memccpy.c ft_putendl_fd.c ft_strlcpy.c ft_tolower.c \
		  ft_isalpha.c ft_memchr.c ft_putnbr_fd.c ft_strlen.c ft_toupper.c \
		  ft_isascii.c ft_memcmp.c ft_putstr_fd.c ft_strmapi.c \
		  ft_isdigit.c ft_memcpy.c ft_split.c ft_strncmp.c \

OBJ			=	$(addprefix $(OBJ_DIR),$(SRCS:.c=.o))

INC			=	$(addprefix -I,$(INC_DIR))

RM			=	/bin/rm -f
RM_DIR		=	/bin/rm -rf

$(OBJ_DIR)%.o:$(SRCS_DIR)%.c $(INC_DIR)*.h
	@$(CC) $(FLAGS) -c $< -o $@

all:
	@mkdir -p $(OBJ_DIR)
	@$(MAKE) $(NAME) --no-print-directory
	@echo "$(YELLOW)ALL$(NC)"

$(NAME): $(OBJ)
	@$(AR) $(NAME) $?


clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(YELLOW)cleen$(NC)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(YELLOW)fcleen$(NC)"

eclean: clean fclean

re: fclean all
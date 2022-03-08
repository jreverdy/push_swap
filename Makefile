CC		= clang
CFLAGS	= -Wall -Werror -Wextra

INCS		= incs/push_swap.h
INCS_PATH	= incs
SRCS_PATH	= srcs
OBJS_PATH	= .objs
VPATH		= srcs

SRCS =	main.c				\
		ft_check_errors.c	\

LIBFT_AR = ./libft/libft.a

PRINTF_AR = ./ft_printf/libftprintf.a

OBJS = $(addprefix $(OBJS_PATH)/, $(SRCS:.c=.o))

NAME = push_swap

all : ft_printf libft $(NAME)

libft :
	@make -C ./libft

ft_printf :
	@make -C ./ft_printf

$(OBJS_PATH)/%.o : %.c $(INCS) Makefile
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS) $(LIBFT_AR) $(PRINTF_AR)
	$(CC) $(OBJS) $(LIBFT_AR) $(PRINTF_AR) -o $(NAME)

clean :
	$(RM) $(OBJS)
	make clean -C ./libft
	make clean -C ./ft_printf

fclean : clean
	$(RM) $(LIBFT_AR)
	$(RM) $(PRINT_AR)
	$(RM) $(NAME)

re : fclean clean

.PHONY : all clean fclean re libft ft_printf
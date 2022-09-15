# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbelet <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/29 12:43:52 by lbelet            #+#    #+#              #
#    Updated: 2022/08/02 12:29:50 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(HOME)/.brew/Cellar/readline/8.1.2/include #-g -fsanitize=address 

NAME = minishell

SRC = minishell.c\
		get_path.c\
		split_modif.c\
		signals.c\
		exec_builtins.c\
		one_cmd.c\
		multi_cmds.c\
		errors.c\
		echo.c\
		cd.c\
		unset.c\
		env.c\
		export.c\
		pwd.c\
		exit.c\
		export_utils.c\
		minishell_utils.c\
		free.c\
		malloc.c\
		code_char.c\
		redirections_main.c\
		redir_in.c\
		redir_out.c\
		redir_in_out.c\
		quotes.c\
		first_process.c\
		mid_process.c\
		last_process.c\
		close_fd.c\
		dollar.c\
		dollar_utils.c\
		dollar_utils_bis.c\
		heredoc.c\
		vodka.c\
		exit_utils.c\
		first_process_utils.c\
		export_utils_bis.c\
		heredoc_utils.c\
		last_process_utils.c\
		multi_cmds_utils.c\
		one_cmd_utils.c\
		redir_out_utils.c\
		heredoc_utils_bis.c\
		unset_utils.c\
		redir_in_out_utils.c\
		redirections_main_utils.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	make -C libft
	$(CC) $(CFLAGS) $(OBJ) libft/libft.a -lreadline  -L$(HOME)/.brew/Cellar/readline/8.1.2/lib -o $(NAME)

clean:
	make clean -C libft
	rm -f $(OBJ)

fclean : clean
	make fclean -C libft
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re

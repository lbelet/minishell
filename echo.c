/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <santonie@student.42lausanne.ch > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:41:17 by santonie          #+#    #+#             */
/*   Updated: 2022/07/27 17:22:48 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_write_echo(int fd_out, char *str)
{
	write(fd_out, str, ft_strlen(str));
	write(fd_out, " ", 1);
}

int	ft_echo_fd(int fd_out, char **cmd_test)
{
	int	i;

	if (ft_strncmp(cmd_test[1], "-n", 2) == 0 && !cmd_test[1][2])
	{
		i = 2;
		while (cmd_test[i] && cmd_test[i + 1])
		{
			ft_write_echo(fd_out, cmd_test[i]);
			i++;
		}
		write(fd_out, cmd_test[i], ft_strlen(cmd_test[i]));
	}
	else
	{
		i = 1;
		while (cmd_test[i] && cmd_test[i + 1])
		{
			ft_write_echo(fd_out, cmd_test[i]);
			i++;
		}
		write(fd_out, cmd_test[i], ft_strlen(cmd_test[i]));
		write(fd_out, "\n", 1);
	}
	exit(0);
}

int	ft_write_tmp(int fd_out, char *str)
{
	write(fd_out, &str, ft_strlen(str));
	return (0);
}

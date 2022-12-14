/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_cmd_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <santonie@student.42lausanne.ch > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:26:05 by santonie          #+#    #+#             */
/*   Updated: 2022/07/27 17:25:27 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_process_onlyone(char *path_cmd, char **cmd, char **g_var)
{
	execve(path_cmd, cmd, g_var);
	printf("Not an executable\n");
	exit(126);
}

int	ft_too_long(char *path_cmd, char **cmd, int i)
{
	free(path_cmd);
	ft_free_tab_simple(cmd);
	return (ft_static(i));
}

int	ft_too_long_bis(char *path_cmd, char *cmd, int i)
{
	char	*error;

	error = ft_strdup(cmd);
	printf("commande: %s not found\n", error);
	free(error);
	free(path_cmd);
	free(cmd);
	return (ft_static(i));
}

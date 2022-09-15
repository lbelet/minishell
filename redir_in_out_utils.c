/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redir_in_out.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <santonie@student.42lausanne.ch > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:13:59 by santonie          #+#    #+#             */
/*   Updated: 2022/07/27 17:25:56 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*ft_set_file(char **cmd, int *j, int i)
{
	int		start;
	int		len;
	char	*tmp;
	char	*infile;

	if (cmd[i][*j + 1])
	{
		*j = *j + 1;
		start = *j;
		len = 0;
		while (cmd[i][*j] != '<' && cmd[i][*j] != '>' && cmd[i][*j])
		{
			len++;
			*j = *j + 1;
		}
		tmp = ft_substr(cmd[i], start, len);
		infile = ft_strdup(tmp);
		free(tmp);
		return (infile);
	}
	return (NULL);
}

char	*ft_set_file_bis(char **cmd, int *j, int *i)
{
	int		start;
	int		len;
	char	*tmp;
	char	*infile;

	if (cmd[*i][*j])
	{
		start = *j;
		len = 0;
		while (cmd[*i][*j] == '<' || cmd[*i][*j] == '>')
		{
			len++;
			*j = *j + 1;
		}	
		while (cmd[*i][*j] != '<' && cmd[*i][*j] != '>' && cmd[*i][*j])
		{
			len++;
			*j = *j + 1;
		}
		tmp = ft_substr(cmd[*i], start, len);
		infile = ft_strdup(tmp);
		free(tmp);
		return (infile);
	}
	return (NULL);
}

int	a(int j)
{
	return (j + 1);
}

int	b(int j)
{
	return (j + 2);
}

void	ft_very_first_if(char **c, int *fd, int *i, int *j)
{
	if (c[*i][*j + 1] != '<' && c[*i][*j + 1])
		ft_infile_nosplit(c, fd, j, *i);
	else if (c[*i][*j + 1] != '<' && !c[*i][*j + 1] && c[*i + 1])
		ft_infile_split(c, fd, i, j);
	else if (c[*i][*j + 1] && c[*i][*j + 1] == '<' && c[*i][*j + 2])
		ft_infile_tmp(c, fd, *i, j);
	else if (c[*i][*j + 1] == '<' && !c[*i][*j + 2] && c[*i + 1])
		ft_infile_tmp_split(c, fd, i, j);
	else
		fd[0] = -5;
}

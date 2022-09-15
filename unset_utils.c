/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirections_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <santonie@student.42lausanne.ch > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:48:27 by santonie          #+#    #+#             */
/*   Updated: 2022/07/27 17:26:23 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_sort_alpha_bis(void)
{
	int		k;
	int		j;
	char	*tmp;

	k = 0;
	j = 0;
	while (g_var[k])
	{
		j = 0;
		while (g_var[j])
		{
			if (ft_strcmp(g_var[k], g_var[j]) < 0)
			{
				tmp = ft_strdup(g_var[k]);
				free(g_var[k]);
				g_var[k] = ft_strdup(g_var[j]);
				free(g_var[j]);
				g_var[j] = ft_strdup(tmp);
				free(tmp);
			}
			j++;
		}
		k++;
	}
}

void	ft_sort_alpha_bis_envp(char **g_var)
{
	int		k;
	int		j;
	char	*tmp;

	k = 0;
	j = 0;
	while (g_var[k])
	{
		j = 0;
		while (g_var[j])
		{
			if (ft_strcmp(g_var[k], g_var[j]) < 0)
			{
				tmp = ft_strdup(g_var[k]);
				free(g_var[k]);
				g_var[k] = ft_strdup(g_var[j]);
				free(g_var[j]);
				g_var[j] = ft_strdup(tmp);
				free(tmp);
			}
			j++;
		}
		k++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <santonie@student.42lausanne.ch > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:56:42 by santonie          #+#    #+#             */
/*   Updated: 2022/07/27 17:24:48 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	**ft_malloc_tab(char **original)
{
	int		i;
	char	**sorted;

	i = 0;
	while (original[i])
		i++;
	sorted = malloc((i + 1) * sizeof(char *));
	sorted[i] = NULL;
	return (sorted);
}

char	**ft_malloc_var(char **original)
{
	int		i;
	char	**sorted;

	i = 1;
	while (original[i])
		i++;
	sorted = malloc(i * sizeof(char *));
	sorted[i - 1] = NULL;
	return (sorted);
}

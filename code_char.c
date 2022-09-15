/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <santonie@student.42lausanne.ch > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:51:50 by santonie          #+#    #+#             */
/*   Updated: 2022/07/27 17:22:30 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_open_quote(char *str, int i, int *code_char)
{
	if (str[i] == 34)
	{
		code_char[i] = 1;
		return (1);
	}
	if (str[i] == 39)
	{
		code_char[i] = 3;
		return (3);
	}
	return (0);
}

int	*ft_code_char(char *str)
{
	int	*code_char;
	int	i;
	int	quotes;

	code_char = malloc((ft_strlen(str) + 1) * sizeof(int));
	i = -1;
	quotes = 0;
	while (str[++i])
	{
		if (str[i] != 34 && str[i] != 39 && quotes == 0)
			code_char[i] = 6;
		else if ((str[i] == 34 || str[i] == 39) && quotes == 0)
			quotes = ft_open_quote(str, i, code_char);
		else if (str[i] != 34 && quotes == 1)
			code_char[i] = 7;
		else if (str[i] != 39 && quotes == 3)
			code_char[i] = 8;
		else if ((str[i] == 34 && quotes == 1) || (str[i] == 39 && quotes == 3))
		{
			quotes = 0;
			code_char[i] = 9;
		}
	}
	code_char[i] = 0;
	return (code_char);
}

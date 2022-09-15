/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santonie <santonie@student.42lausanne.ch > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:52:04 by santonie          #+#    #+#             */
/*   Updated: 2022/07/27 17:26:29 by santonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	display_prompt_block(int num)
{
	num++;
	write(1, "\n", 1);
	rl_replace_line("", 0);
	rl_on_new_line();
}

void	display_prompt_block_exit(int num)
{
	num++;
	write(1, "Quit 3\n", 7);
	rl_replace_line("", 0);
	rl_on_new_line();
}

void	define_input_signals_block(void)
{
	signal(SIGINT, display_prompt_block);
	signal(SIGQUIT, display_prompt_block_exit);
}

void	display_prompt(int num)
{
	num++;
	ft_static(1);
	write(1, "\n", 1);
	rl_replace_line("", 0);
	rl_on_new_line();
	rl_redisplay();
}

void	define_input_signals(void)
{
	signal(SIGINT, display_prompt);
	signal(SIGQUIT, SIG_IGN);
}

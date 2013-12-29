/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shell.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scohen <scohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 13:36:40 by scohen            #+#    #+#             */
/*   Updated: 2013/12/29 17:46:05 by scohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libminishell.h"
#include <sys/wait.h>

void	ft_replace_bn(char *buf)
{
	int		i;

	i = 0;
	while (buf[i] != '\0')
	{
		if (buf[i] == '\n')
			buf[i] = ' ';
		i++;
	}
}

int		ft_shell(char **env)
{
	int		father;
	char	buf[BUF_SIZE];
	int		i;

	write(1, "$> ", 3);
	i = read(0, buf, BUF_SIZE);
	buf[i] = '\0';
	ft_replace_bn(buf);
	if (ft_strcmp(buf, " ") == 0)
		return (0);
	father = fork();
	if (father > 0)
		wait(0);
	if (father == 0)
	{
		if (ft_exec_builtin(buf, env) != 0 && ft_exec_function(buf, env) != 0)
		{
			write(1, "minishell1: command not found : ", 32);
			ft_putendl(buf);
		}
	}
	return (0);
}

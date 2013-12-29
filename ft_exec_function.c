/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_function.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scohen <scohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 12:01:52 by scohen            #+#    #+#             */
/*   Updated: 2013/12/29 15:17:36 by scohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libminishell.h"
#include <stdlib.h>

int			ft_exec_function(char *buf, char **env)
{
	char	*tosplit;
	char	**path;
	int		i;
	char	**av;

	i = 0;
	tosplit = ft_copy_path(env);
	path = ft_strsplit(tosplit, ':');
	while (path[i] != '\0')
	{
		path[i] = ft_putslash(path[i]);
		i++;
	}
	av = ft_strsplit(buf, ' ');
	i = 0;
	while (path[i] != NULL)
	{
		path[i] = ft_strjoin(path[i], av[0]);
		execve(path[i], av, env);
		i++;
	}
	return (-1);
}

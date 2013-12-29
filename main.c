/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scohen <scohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 17:09:27 by scohen            #+#    #+#             */
/*   Updated: 2013/12/29 17:09:28 by scohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libminishell.h"
#include <unistd.h>
#include <sys/wait.h>

int				main(int ac, char **av, char **env)
{
	ac = ac;
	av = av;
	while (42)
		ft_shell(env);
	return (0);
}

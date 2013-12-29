/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_path.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scohen <scohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 14:15:44 by scohen            #+#    #+#             */
/*   Updated: 2013/12/27 15:46:29 by scohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libminishell.h"

char		*ft_copy_path(char **env)
{
	int		i;
	int		y;
	char	*ret;

	i = 0;
	y = 5;
	ret = malloc(sizeof(char) * ft_strlen(env[0]) - y);
	while (env[0][y] != '\0')
	{
		ret[i] = env[0][y];
		y++;
		i++;
	}
	return (ret);
}

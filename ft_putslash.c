/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putslash.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scohen <scohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 16:53:49 by scohen            #+#    #+#             */
/*   Updated: 2013/12/28 16:22:01 by scohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libminishell.h"
#include <stdlib.h>

char		*ft_putslash(char *path)
{
	char	*tmp;
	int		i;

	i = ft_strlen(path);
	tmp = malloc(sizeof(char) * (i + 2));
	ft_strcpy(tmp, path);
	tmp[i] = '/';
	tmp[i + 1] = '\0';
	return (tmp);
}

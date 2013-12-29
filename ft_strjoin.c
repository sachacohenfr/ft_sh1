/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scohen <scohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/28 17:09:13 by scohen            #+#    #+#             */
/*   Updated: 2013/12/28 17:12:22 by scohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libminishell.h"
#include <stdlib.h>

char				*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	size_t			size;
	unsigned int	i;
	unsigned int	j;

	size = ft_strlen((char *) s1) + ft_strlen((char *) s2);
	str = (char *)malloc(sizeof(char) * size + 1);
	i = 0;
	j = 0;
	while (s1[j] != '\0')
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

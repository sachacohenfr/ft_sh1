/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scohen <scohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 16:38:27 by scohen            #+#    #+#             */
/*   Updated: 2013/12/27 16:40:47 by scohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libminishell.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*f;
	int		i;

	f = NULL;
	if (s && len)
	{
		i = 0;
		f = ft_strnew(len);
		while (len - i > 0)
		{
			f[i] = s[start + i];
			i++;
		}
	}
	return (f);
}

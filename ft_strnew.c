/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scohen <scohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 14:09:00 by scohen            #+#    #+#             */
/*   Updated: 2013/12/27 14:16:41 by scohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strnew(size_t size)
{
	char	*str;
	char	*s;

	str = (char *)malloc(sizeof(*str) * size + 1);
	s = str;
	while (*str != str[size])
		*str++ = '\0';
	*str = '\0';
	return (s);
}

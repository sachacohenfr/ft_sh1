/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scohen <scohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 16:31:35 by scohen            #+#    #+#             */
/*   Updated: 2013/12/27 17:27:05 by scohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libminishell.h"
#include <stdlib.h>

static int		ft_nb_word(char const *s, char c)
{
	int		i;
	int		nb_word;

	i = 0;
	nb_word = 0;
	if (!s)
		return (0);
	if (s[i] != c)
		nb_word++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			nb_word++;
		i++;
	}
	return (nb_word);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab_str;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	tab_str = malloc (sizeof(char *) * (ft_nb_word(s, c) + 1));
	while (k < ft_nb_word(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[j] != c && s[j])
			j++;
		tab_str[k] = ft_strsub(s, i, (j - i));
		i = j;
		k++;
	}
	tab_str[k] = '\0';
	return (tab_str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkrifa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 02:13:11 by nkrifa            #+#    #+#             */
/*   Updated: 2017/01/22 02:13:12 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	unsigned int		ft_nbrsplit(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			j++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (j);
}

char						**ft_strsplit(char const *s, char c)
{
	char			**tab;
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	k = ft_nbrsplit(s, c);
	if ((tab = (char **)malloc(sizeof(char *) * (k + 1))) == NULL)
		return (NULL);
	while (i < k)
	{
		j = 0;
		while (*s && *s == c)
			s = s + 1;
		while (*(s + j) && *(s + j) != c)
			j++;
		*(tab++) = ft_strsub(s, 0, j);
		s = s + j;
		i++;
	}
	*tab = NULL;
	return (tab - k);
}

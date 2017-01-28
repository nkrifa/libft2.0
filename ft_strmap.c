/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkrifa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 02:10:18 by nkrifa            #+#    #+#             */
/*   Updated: 2017/01/26 23:59:51 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmap(char const *s, char (*f)(char))
{
	char			*new;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	new = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	while (s[i])
	{
		new[i] = (*f)((char)s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

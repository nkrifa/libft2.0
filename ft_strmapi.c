/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkrifa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 02:10:29 by nkrifa            #+#    #+#             */
/*   Updated: 2017/01/27 00:07:43 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	new = ft_strnew((size_t)ft_strlen(s));
	if (new == NULL)
		return (NULL);
	while (s[i])
	{
		new[i] = (*f)(i, (char)s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

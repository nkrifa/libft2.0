/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkrifa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 02:09:54 by nkrifa            #+#    #+#             */
/*   Updated: 2017/01/22 02:09:55 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s1;
	char	*s2;
	size_t	len;

	s1 = (char *)ft_memchr(dst, '\0', size);
	if (s1 == NULL)
		return (size + ft_strlen(src));
	s2 = (char *)src;
	len = (size_t)(s1 - dst) + ft_strlen(s2);
	while ((size_t)(s1 - dst) < size - 1 && *s2 != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (len);
}

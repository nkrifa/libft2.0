/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkrifa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 02:03:44 by nkrifa            #+#    #+#             */
/*   Updated: 2017/01/22 02:03:45 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	str[n];

	if (n < 134217728)
	{
		ft_memcpy(str, (unsigned char *)s2, n);
		ft_memcpy((unsigned char *)s1, str, n);
		return ((unsigned char *)s1);
	}
	return (NULL);
}

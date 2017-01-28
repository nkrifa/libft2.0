/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrifa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 18:19:38 by okrifa            #+#    #+#             */
/*   Updated: 2015/12/23 18:44:50 by okrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned char *pstr1;
	unsigned char *pstr2;

	pstr1 = (unsigned char*)str1;
	pstr2 = (unsigned char*)str2;
	while (n-- > 0)
		pstr1[n] = pstr2[n];
	return (str1);
}

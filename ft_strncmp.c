/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkrifa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 02:11:17 by nkrifa            #+#    #+#             */
/*   Updated: 2017/01/22 02:11:18 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*(unsigned char*)s1 == *(unsigned char*)s2 && *s1 && *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

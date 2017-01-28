/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkrifa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 02:12:16 by nkrifa            #+#    #+#             */
/*   Updated: 2017/01/27 00:22:11 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;
	size_t	i;

	i = 0;
	if ((new = (char *)malloc((size + 1) * (sizeof(char)))) == NULL)
		return (NULL);
	while (new[i])
	{
		new[i] = '\0';
		i++;
	}
	return (new);
}

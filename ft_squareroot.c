/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_squareroot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkrifa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 02:06:57 by nkrifa            #+#    #+#             */
/*   Updated: 2017/01/22 02:06:58 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_squareroot(unsigned int n)
{
	int				i;
	int				j;
	unsigned int	k;

	i = 1;
	j = 0;
	k = 0;
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	while (k <= n)
	{
		if (k == n)
			return (j);
		k += i;
		i += 2;
		j++;
	}
	return (0);
}

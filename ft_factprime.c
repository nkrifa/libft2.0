/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factprime.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkrifa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 01:56:02 by nkrifa            #+#    #+#             */
/*   Updated: 2017/01/22 01:56:03 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int		ft_nbfact(unsigned int n)
{
	unsigned int i;
	unsigned int div;

	i = 0;
	div = 2;
	while (div <= n)
	{
		if (n % div == 0)
		{
			n = n / div;
			i++;
		}
		else
			div++;
	}
	return (++i);
}

unsigned int			*ft_factprime(unsigned int n)
{
	unsigned int *tab;
	unsigned int i;
	unsigned int div;

	i = 0;
	div = 2;
	if ((tab = (unsigned int *)malloc(ft_nbfact(n) * sizeof(int))) == NULL)
		return (NULL);
	while (div <= n)
	{
		if (n % div == 0)
		{
			n = n / div;
			tab[i] = div;
			i++;
		}
		else
			div++;
	}
	tab[i] = 0;
	return (tab);
}

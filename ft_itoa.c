/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkrifa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 01:58:24 by nkrifa            #+#    #+#             */
/*   Updated: 2017/01/22 01:58:26 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_nbrch(int n)
{
	unsigned int	i;

	i = 1;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char				*ft_itoa(int n)
{
	char			*str;
	int				i;

	i = ft_nbrch(n) - 1;
	if (n == -2147483648)
		str = ft_strdup("-2147483648");
	else
	{
		if ((str = (char *)malloc((i + 2) * sizeof(char))) == NULL)
			return (NULL);
		if (n == 0)
			str[i] = '0';
		str[i + 1] = '\0';
		if (n < 0 && n != -2147483648)
		{
			n = -n;
			str[0] = '-';
		}
		while (n > 0)
		{
			str[i--] = n % 10 + 48;
			n = n / 10;
		}
	}
	return (str);
}

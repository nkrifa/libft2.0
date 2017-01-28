/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkrifa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 02:04:36 by nkrifa            #+#    #+#             */
/*   Updated: 2017/01/22 02:04:38 by nkrifa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_power(long nb, unsigned int power)
{
	long result;

	if (power == 0)
		result = 1;
	else
		result = nb * ft_power(nb, power - 1);
	return (result);
}

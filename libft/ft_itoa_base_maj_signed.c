/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_maj_signed.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdidelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 00:43:53 by fdidelot          #+#    #+#             */
/*   Updated: 2017/05/19 00:44:02 by fdidelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char		*ft_itoa_base_maj_signed(intmax_t nb, int base)
{
	char	*str;
	int		i;
	char	*val;
	int		min;

	min = 0;
	str = malloc(sizeof(char) * 67);
	i = 0;
	if (nb < 0)
	{
		min = 1;
		nb *= -1;
	}
	val = ft_strdup("0123456789abcdef");
	while (nb / base)
	{
		str[i] = val[nb % base];
		nb /= base;
		i++;
	}
	str[i] = val[nb % base];
	if (min)
	{
		str[i + 1] = '-';
		str[i + 2] = '\0';
	}
	else
		str[i + 1] = '\0';
	free(val);
	return (ft_strrev(str));
}

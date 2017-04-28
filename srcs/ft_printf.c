/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdidelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 00:32:26 by fdidelot          #+#    #+#             */
/*   Updated: 2017/04/28 05:22:29 by fdidelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*char	*analyse(char *format, va_list ap)
{
	
}
*/

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	char	*stock;
	int		i;

	ap = NULL;
	while (format[i])
	{
		while (format[i] && format[i++] != '%');
		if (format[i - 1] == '%')
			if (!ap)
				va_start(ap, format);
			analyse;
		else
			stock = format;
	}
	affiche(stock);
	return (ft_strlen(stock));
}

int main()
{
	char string[] = "trejj";
	ft_printf("[%s\n]", string);
	return (0);
}

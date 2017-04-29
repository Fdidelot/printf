/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snedir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 02:15:39 by snedir            #+#    #+#             */
/*   Updated: 2017/04/29 04:23:31 by snedir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	flags(char format, t_print *elem)
{
	if (format == '-')
		return (MINUS = 1);
	if (format == '+')
		return (PLUS = 1);
	if (format == ' ')
		return (SPACE = 1);
	if (format == '#')
		return (HASH = 1);
	if (format == '0')
		return (ZERO = 1);
	return (0);
}

int	num_width(char *format, t_print *elem, int start)
{
	int i;
	char *str;
	int j;
	
	i = 0;
	j = 0;
	str = NULL;
	while (ft_isdigit(*format))
	{
		i++;
		format++;
	}
	if (i)
	{
		str = ft_strsub(format, start, (size_t)i);
		NUM = ft_atoi(str);
		return (1);
	}
	return (0);
}

int	parser(char *format, t_print *elem)
{
	int i;

	i = 0;
	STOCK = ft_strnew(1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			STOCK = ft_strsub(STOCK, );
		}
		i++;
	}
	return (1);
}

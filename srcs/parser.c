/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snedir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 02:15:39 by snedir            #+#    #+#             */
/*   Updated: 2017/05/01 07:16:31 by fdidelot         ###   ########.fr       */
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

// ADD STAR *****************************************
int	num_width(char *format, t_print *elem, int start)
{
	int i;
	size_t	ret;
	char *str;
	
	i = 0;
	str = NULL;
	while (ft_isdigit(format[i]))
		i++;
	if (i)
	{
		str = ft_strsub(format, start, (size_t)i);
		NUM = ft_atoi(str);
		ret = ft_strlen(str);
		free(str);
		return ((int)ret);
	}
	return (0);
}
/*
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
*/
int	lenght(char *format, t_print *elem)
{
	if (*format == 'h')
	{
		if (*(format + 1) == 'h')
		{	
			LEN = 'H';
			return (2);
		}
		LEN = 'h';
		return (1);
	}
	if (*format == 'l')
	{
		if (*(format + 1) == 'l')
		{	
			LEN = 'L';
			return (2);
		}
		LEN = 'l';
		return (1);
	}
	if (*format == 'j')
	{
		LEN = 'j';
		return (1);
	}
	if (*format == 'z')
	{
		LEN = 'z';
		return (1);
	}
	return (0);
}

char specifier(t_print *elem, char format)
{
	if (format == 's')
		return (SPEC = 's');
	if (format == 'S')
		return (SPEC = 'S');
	if (format == 'p')
		return (SPEC = 'p');
	if (format == 'd' || format == 'i')
		return (SPEC = 'd');
	if (format == 'D')
		return (SPEC = 'D');
	if (format == 'o')
		return (SPEC = 'o');
	if (format == 'O')
		return (SPEC = 'O');
	if (format == 'u')
		return (SPEC = 'u');
	if (format == 'U')
		return (SPEC = 'U');
	if (format == 'x')
		return (SPEC = 'x');
	if (format == 'X')
		return (SPEC = 'X');
	if (format == 'c')
		return (SPEC = 'c');
	if (format == 'C')
		return (SPEC = 'C');
	return (0);
}

int create_elem(t_print **elem, char *format)
{
	int i;
	int	j;

	i = 1;
	while (format[i] && (*elem)->specifier == '1')
	{
		i += flags(*format, *elem);
		i += num_width(&format[i], *elem, i);
		if (format[i] == '.')
			i += num_width(&format[i], *elem, i);
		i += lenght(&format[i], *elem);
		if (specifier(*elem, *format))
			i++;
		i++;
	}
	return (1);
}
/*
t_print	*analyse(char *format, va_list *ap, t_print **elem)
{
	t_print *start;
	t_print *new;
	
	while (*format)
	{
		if (*format == '%')
		{
			if (!*elem)
			{
				*elem = init();
				start = *elem;
				format += create_elem(elem, format);
			}
			else
			{
				new = init();
				format += create_elem(&new, format);
				jonction(*elem, &new);
			}
		}
		else
			format++;
	}
	return (start);
}*/

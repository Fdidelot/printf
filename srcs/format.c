/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snedir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 10:26:46 by snedir            #+#    #+#             */
/*   Updated: 2017/05/16 09:33:31 by snedir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	parcours_liste(t_print *elem, va_list ap)
{
	while (elem)
	{
		if (SPEC == 'C' || (SPEC == 'c' && LEN == 'l'))
			/*STOCK = */wide_char(elem, ap);
		if (SPEC == 'c')
			arg_char(elem, ap);
		if (SPEC == 'x' || SPEC == 'X')
			STOCK = get_hexa_args(elem, ap);
		if (SPEC == 'o' || SPEC == 'u')
			STOCK = get_o_u_args(elem, ap);
		if (SPEC == 'd' || SPEC == 'i')
			STOCK = get_signed_number(elem, ap);
		if (SPEC == 's')
			STOCK = string(elem, ap);
		elem = NEXT;
	}
}

int		print_list(t_print *elem, char *format)
{
	int couunt = 0;
	int i = 0;
	while (elem)
	{
		if (format[i] == '%')
		{
			if (STOCK)
			{
				write(1, STOCK, SIZE);
				couunt += SIZE;
				while (format[i] && format[i] != SPEC)
					i++;
				i++;
				elem = NEXT;
			}
		}
		write(1, format + i, 1);
		if (format[i] != '%')
			i++;
	}
	return (couunt);
}

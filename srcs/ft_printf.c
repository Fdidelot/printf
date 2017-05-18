/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdidelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 00:32:26 by fdidelot          #+#    #+#             */
/*   Updated: 2017/05/18 03:21:54 by fdidelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	*ap;
	t_print	*elem;
	int		ret;

	va_start(ap, format);
	analyse(format, elem);
	create_stock(elem);
	ret = da_print(format, elem);
	va_end(ap);
	return (ret);
}

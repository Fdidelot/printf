/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdidelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 00:32:26 by fdidelot          #+#    #+#             */
/*   Updated: 2017/05/18 01:20:05 by fdidelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	*ap;
	t_print	*elem;
	t_print	*start;
	char	*final_buff;
	int		ret;

	va_start(ap, format);
	start = analyse(format, ap, &elem);
	create_stock(elem);
	final_buff = create_buff(format, elem);
	affiche(final_buff);
	ret = (int)strlen(final_buff);
	free(final_buff);
	va_end(ap);
	return (ret);
}

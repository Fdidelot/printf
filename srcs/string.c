/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snedir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 01:48:14 by snedir            #+#    #+#             */
/*   Updated: 2017/05/09 15:37:41 by fdidelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_printf.h"

void		string(t_print *elem, va_list *ap)
{
	char	*tmp;
	tmp = va_arg(ap, char *);
	STOCK = (char*)malloc(sizeof(char) * (ft_strlen(tmp) + 1));
	STOCK = tmp;
}

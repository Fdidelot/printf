/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   field.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snedir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 18:48:09 by snedir            #+#    #+#             */
/*   Updated: 2017/05/18 02:27:34 by fdidelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"


void	create_stock(t_print *elem)
{
	while (elem)
	{
		if (NUM)
			field(elem);
		//check_flags(elem);
		elem = NEXT;
	}
}




void	field(t_print *elem)
{
	char	*space;
	int		i;
	int		size;

	if ((size = NUM - ft_strlen(STOCK)) < 1)
		return ;
	i = 0;
	space = malloc(sizeof(char) * size);
	space[size] = '\0';
	while (i < size)
		space[i++] = ' ';
	STOCK = ft_strjoin_free(space, STOCK, 2);
}

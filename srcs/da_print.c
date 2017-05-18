/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   da_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdidelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 03:22:58 by fdidelot          #+#    #+#             */
/*   Updated: 2017/05/18 05:47:18 by fdidelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#includes "../includes/ft_printf.h"

int	da_print(char *format, t_print *elem)
{
	char	*buff;
	int		i;
	int		size;
	int		last;

	i = 0;
	size = 0;
	last = 0;
	buff = malloc(1);
	buff = "\0";
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (i - size > 0)
				buff = ft_strjoin_free(buff, ft_strsub(format, last, i), 2);
			i += SIZE;
			last = i;
			size += i + STSIZ;
			buff = ft_strjoin_free(buff, STOCK, 2);
			elem = NEXT;
		}
		i++;
	}
}

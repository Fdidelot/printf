/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snedir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 08:33:59 by snedir            #+#    #+#             */
/*   Updated: 2017/05/09 11:56:31 by snedir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"


/* BEAUCOUP DE FREE A FAIRE */


char			*create_mask(int len)
{
	if (len <= 7)
		return (ft_strdup("0xxxxxxx"));
	if (len > 7 && len <= 11)
		return (ft_strdup("110xxxxx 10xxxxxx"));
	if (len > 11 && len <= 16)
		return (ft_strdup("1110xxxx 10xxxxxx 10xxxxxx"));
	else
		return (ft_strdup("11110xxx 10xxxxxx 10xxxxxx 10xxxxx"));
	return (0);
}

int				zero_fill(int len)
{
	if (len <= 7)
		return (7 - len);
	if (len > 7 && len <= 11)
		return (11 - len);
	if (len > 11 && len <= 16)
		return (16 - len);
	else
		return (21 - len);
	return (0);
}

char			*fill_mask(char *mask, char *fill)
{
	int i;
	int j;
	int zero;

	i = 0;
	j = 0;
	zero = zero_fill(ft_strlen(fill));
	while (mask[i] && fill[j])
	{
		if (mask[i] == 'x')
		{
			while (zero)
			{
				if (mask[i] == 'x')
				{
					mask[i] = '0';
					zero--;
				}
				i++;
			}
			mask[i] = fill[j];
			j++;
		}
		i++;
	}
	return (mask);
}

int				*tabnum()
{
	int *tab;
	int i = 0;
	int nb = 128;

	tab = (int*)malloc(sizeof(int) * 8);
	while (i < 8)
	{
		tab[i] = nb;
		nb /= 2;
		i++;
	}
	return (tab);
}

unsigned char		*binary_to_hex(char **split, int sizetab)
{
	unsigned char *tab;
	int *add;
	int nb;
	int i;
	int j;

	i = 0;
	j = 0;
	nb = 0;
	add = tabnum();
	tab = (unsigned char*)ft_strnew(sizetab);
	while (split[i])
	{
		while (split[i][j])
		{
			if (split[i][j] == '1')
				nb += add[j];
			j++;
		}
		tab[i] = nb;
		nb = 0;
		j = 0;
		i++;
	}
	free(add);
	return (tab);
}

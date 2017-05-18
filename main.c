/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdidelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 01:09:20 by fdidelot          #+#    #+#             */
/*   Updated: 2017/05/18 02:28:18 by fdidelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <unistd.h>
#include <wchar.h>
#include <locale.h>

/*void print_grid(char **grid)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (grid[i])
	{
		while (grid[i][j])
		{
			ft_putchar(grid[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
	ft_putchar('\n');
}

int print(char *format, ...)
	{
		va_list ap;
		t_print *elem = NULL;
		t_print *start;
		
		va_start(ap, format);
		start = analyse(format, elem);
		browse_list(start, ap);
		return (10);
	}
	*/
int main()
{
//	setlocale(LC_ALL, "");
	char str[] = "Pet+it a#brut0i : %-d";
	t_print	*elem;
	int i = 0;

/*	elem = NULL;
	/*************************************************************************/
	/*free le mask, fill, strsplit*/
/*	va_list *ap;
	int haha = 0x7845;

	while (++i < 1000)
		print("%C %C %C\n", haha, haha + i, haha + i+1);
*/
	elem = init();
	STOCK = malloc(8);
	STOCK[0] = 'B';STOCK[1] = 'o';STOCK[2] = 'n';STOCK[3] = 'j';STOCK[4] = 'o';STOCK[5] = '\0';
	NUM = 100;
	printf("%s\n", STOCK);
	field(elem);
	printf("%s\n", STOCK);
	return (0);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdidelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 01:09:20 by fdidelot          #+#    #+#             */
/*   Updated: 2017/05/10 19:12:55 by snedir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <unistd.h>
#include <wchar.h>
#include <locale.h>

void print_grid(char **grid)
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

int main()
{
	setlocale(LC_ALL, "");
	char str[] = "Pet+it a#brut0i : %-d";
	t_print	*elem;
	int i = 0;

	elem = NULL;
	/*elem = 	analyse("Pet+it a#brut0i : %-d   %+-ciwebdiwedhwieuhd%skwjdwh%s", elem);
	  while (elem)
	  {
	  printf("Min = %d, Plus = %d, Space = %d, Hash = %d, Zero = %d, NUM = %d, ACC = %d, NACC = %d, LEN = %c, SPEC = %c\n", MINUS, PLUS, 
	  SPACE, HASH, ZERO, NUM, ACC, NACC, LEN, SPEC);
	  elem = NEXT;
	  }*/
	/*	create_elem(elem, "% +-#0654.125ll%");
		printf("Min = %d, Plus = %d, Space = %d, Hash = %d, Zero = %d, NUM = %d, ACC = %d, NACC = %d, LEN = %c, SPEC = %c\n", MINUS, PLUS, SPACE, HASH, ZERO, NUM, ACC, NACC, LEN, SPEC); */
	/*int c = 208;
	  c = 169;
	  write(1, &c, 1);
	  char stru[2];
	  write(1, stru, 2);*/
	/*******************OPERATION POUR UN CHARACTERE UNICODE******************/
	//char *print = ft_itoa_base_maj(1234, 16);
	//write(1, print, ft_strlen(print));
	//free le split
	/*************************************************************************/
	/*free le mask, fill, strsplit*/
	printf("bonjour %.2f", 1.123);
	return (0);
}

/*elem = init();
  while (str[i])
  {
  printf("Flags = %d\n", flags(str[i], elem));
  printf("Min = %d, Plus = %d, Space = %d, Hash = %d, Zero = %d\n", MINUS, PLUS, SPACE, HASH, ZERO);
  i++;
  }
//unsigned char tamer = 45;
int j = 0, z = 1;
while (j < 60)
{
printf("%010.*d\n",j, z );
//		printf("%*.*s\n",j, z, "salut" );
j++;
z*=2;
}
//printf("%.*d %.*d\n", tamer, 25, 15, 25);
//printf("%.*d %.*d\n", tamer, 25, 15, 25);*/

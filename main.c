/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdidelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 01:09:20 by fdidelot          #+#    #+#             */
/*   Updated: 2017/05/09 12:07:57 by snedir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <unistd.h>
#include <wchar.h>

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
	int tr = 0x1F645;
	char *s = ft_itoa_base(tr, 2);  
	size_t len = ft_strlen(s);
	char *mask = create_mask(len);
	char *fill = fill_mask(mask, s);
	free(mask);
	char **strsplit = ft_strsplit(fill, ' ');
	unsigned char *tabchiffre = binary_to_hex(strsplit, 4);
	//free le split
	//le 4 en dur a remplacer par une var = nbligne_du_split
	/*************************************************************************/
	/* free le mask, fill, strsplit*/
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdidelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 01:09:20 by fdidelot          #+#    #+#             */
/*   Updated: 2017/05/05 05:58:15 by fdidelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int main()
{
	char str[] = "Pet+it a#brut0i : %-d";
	t_print	*elem;
	int i = 0;

	elem = NULL;
	elem = 	analyse("Pet+it a#brut0i : %-d   %+-ciwebdiwedhwieuhd%skwjdwh%s", elem);
	while (elem)
	{
	printf("Min = %d, Plus = %d, Space = %d, Hash = %d, Zero = %d, NUM = %d, ACC = %d, NACC = %d, LEN = %c, SPEC = %c\n", MINUS, PLUS, SPACE, HASH, ZERO, NUM, ACC, NACC, LEN, SPEC);
	elem = NEXT;
	}
/*	create_elem(elem, "% +-#0654.125ll%");
	printf("Min = %d, Plus = %d, Space = %d, Hash = %d, Zero = %d, NUM = %d, ACC = %d, NACC = %d, LEN = %c, SPEC = %c\n", MINUS, PLUS, SPACE, HASH, ZERO, NUM, ACC, NACC, LEN, SPEC); */
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

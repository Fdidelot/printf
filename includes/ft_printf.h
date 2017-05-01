/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdidelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 00:37:00 by fdidelot          #+#    #+#             */
/*   Updated: 2017/05/01 07:14:12 by fdidelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h> //printf use
# include <stdarg.h>
# include <unistd.h>
# include "../libft/libft.h"

/* FLAGS */
# define MINUS elem->minus
# define PLUS elem->plus
# define SPACE elem->space
# define HASH elem->hashtag
# define ZERO elem->zero

/* WIDTH */
# define NUM elem->number
# define STAR elem->asterix

/* PRECISION */
# define ACC elem->accuracy
# define STARAC elem->starcuracy

/* LENGHT */
# define LEN elem->lenght

/* SPECIFIER */
# define SPEC elem->specifier

/* MISCELLANEOUS */
# define STOCK elem->stock
# define NOPE elem->nope

/* LIST */
# define LST elem->list
# define START elem->start
# define NEXT elem->next

// Pas OUBLIER DE FREE TAMER (la liste) !!!!!!!!!!!!!!!!!!!!!!
typedef	struct		s_print
{
	int				minus;
	int				plus;
	int				space;
	int				hashtag;
	int				zero;
	int				number;
	int				asterix;
	int				accuracy;
	int				starcuracy;
	char			lenght;
//	int				size;
	char			specifier;
//	int				nope;
	char			*stock;
	struct s_print	*next;
}					t_print;

int					lenght(char *format, t_print *elem);
int					ft_printf(const char *format, ...);
int					create_elem(t_print **elem, char *format);
int					num_width(char *format, t_print *elem, int start);
t_print				*analyse(char *format, va_list *ap, t_print **elem);
int					flags(char format, t_print *elem);
t_print				*init();

#endif

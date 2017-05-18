/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdidelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 00:37:00 by fdidelot          #+#    #+#             */
/*   Updated: 2017/05/18 05:47:24 by fdidelot         ###   ########.fr       */
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
# define NACC elem->num_acc
# define STARAC elem->starcuracy

/* LENGHT */
# define LEN elem->lenght

/* SPECIFIER */
# define SPEC elem->specifier

/* MISCELLANEOUS */
# define STOCK elem->stock
# define NOPE elem->nope
# define DOLL elem->priority
# define SIZE elem->content_size
# define STSIZ elem->stock_size

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
	int				num_acc;
	int				starcuracy;
	char			lenght;
	int				stock_size;
	char			specifier;
//	int				nope;
	int				priority; //RAJOUT INIT
	int				content_size;
	char			*stock;
	struct s_print	*next;
}					t_print;

void				field(t_print *elem);
void				create_stock(t_print *elem);
void				browse_list(t_print *elem, va_list ap);
void				join(t_print *elem, t_print *news);
void				analyse(char *format, t_print *elem);

int					wide_char(t_print *elem, va_list ap);
int					countspace(char *mask);
int					lenght(char *format, t_print *elem);
int					ft_printf(const char *format, ...);
int					create_elem(t_print *elem, char *format);
int					num_width(char *format, t_print *elem, int start);
int					num_acc(char *format, t_print *elem, int start);
int					flags(char format, t_print *elem);
int					da_print(char *format, t_print *elem);

char				specifier(t_print *elem, char format);
char				*binary_to_dec(char **split, int sizetab);
char				*create_mask(int len);
char				*fill_mask(char *mask, char *fill);

t_print				*init();

#endif

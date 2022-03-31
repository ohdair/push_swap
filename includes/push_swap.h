/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewpark <jaewpark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:04:23 by jaewpark          #+#    #+#             */
/*   Updated: 2022/03/31 11:34:11 by jaewpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "linked.h"
# include <unistd.h>

typedef struct s_value
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	min;
}	t_value;

typedef struct s_pushswap
{
	t_list	*a;
	t_list	*b;
	int		min;
	int		mid;
	int		max;
	int		lis;
	int		db_height;
}	t_pushswap;

/*
**	utils_a
*/
int		swap(t_pushswap *t, char alpha);
int		rotate(t_pushswap *t, char alpha);
int		reverse_rotate(t_pushswap *t, char alpha);
int		push(t_pushswap *t, char alpha);

/*
**	util_b
*/
void	call_utils(t_pushswap *t, char *alpha);
void	ss(t_pushswap *t);
void	rr(t_pushswap *t);
void	rrr(t_pushswap *t);

/*
**	parsing
*/
int		parsing_arg(char **argv, int argc, t_pushswap *t);

/*
**	lis
*/
int		get_lis(t_pushswap *t);
int		ft_max(int a, int b);

/*
**	sort
*/
void	a_to_b(t_pushswap *t);
void	b_to_a(t_pushswap *t);
void	get_push(t_pushswap *t, int ***db);
void	last_sort(t_pushswap *t);

/*
**	sort_utils
*/
void	reset_db(t_pushswap *t, int ***db);
void	delete_db(t_pushswap *t, int **db);
int		ft_min(float a, float b);
int		**database(t_pushswap *t);
int		check_sort(t_pushswap *t);

/*
**	main
*/
void	error(int code);

#endif

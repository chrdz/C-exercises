/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_ft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 23:34:04 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/10 02:07:37 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAB_FT_H
# define FT_TAB_FT_H

t_opp gl_opptab[] =
{
	{'-', &ft_sub},
	{'+', &ft_add},
	{'*', &ft_mul},
	{'/', &ft_div},
	{'%', &ft_mod},
	{'', &ft_usage}
};
#endif

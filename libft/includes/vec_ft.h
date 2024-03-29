/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_ft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalyeon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 19:26:06 by rgalyeon          #+#    #+#             */
/*   Updated: 2018/12/22 08:35:09 by rgalyeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_FT_H
# define VEC_FT_H

typedef struct	s_vec
{
	void	*data;
	size_t	capacity;
	size_t	total;
	size_t	offset;
}				t_vec;

t_vec			*ft_vec_init(size_t capacity);
t_vec			*ft_vec_push(t_vec **vec, char c);

#endif

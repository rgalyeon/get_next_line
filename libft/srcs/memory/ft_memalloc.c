/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalyeon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 08:07:29 by rgalyeon          #+#    #+#             */
/*   Updated: 2018/12/07 21:50:12 by rgalyeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/memory_ft.h"

void	*ft_memalloc(size_t size)
{
	void	*fresh;

	fresh = (void *)malloc(size);
	if (!fresh)
		return (NULL);
	ft_bzero(fresh, size);
	return (fresh);
}

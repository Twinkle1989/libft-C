/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:00:30 by tsolanki          #+#    #+#             */
/*   Updated: 2024/04/24 12:36:08 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t n)
{
	void	*ptr;
	size_t	i;

	ptr = malloc(count * n);
	i = 0;
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * n);
	return (ptr);
}

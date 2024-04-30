/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:50:57 by tsolanki          #+#    #+#             */
/*   Updated: 2024/04/18 21:08:06 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, void const *src, size_t n)
{
	unsigned char		*dest_byte;
	const unsigned char	*src_byte;

	dest_byte = dest;
	src_byte = src;
	if (!dest && !src)
		return (dest);
	while (n-- > 0)
	{
		*dest_byte = *src_byte;
		dest_byte++;
		src_byte++;
	}
	return (dest);
}

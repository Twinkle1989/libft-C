/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 20:29:09 by tsolanki          #+#    #+#             */
/*   Updated: 2024/04/22 13:51:18 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	unsigned int	t;
	unsigned char	*a1;
	unsigned char	*a2;

	t = 0;
	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	while ((*a1 || *a2) && (t < n))
	{
		if (*a1 != *a2)
			return (*a1 - *a2);
		a1++;
		a2++;
		t++;
	}
	return (0);
}

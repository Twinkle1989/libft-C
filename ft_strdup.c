/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:34:02 by tsolanki          #+#    #+#             */
/*   Updated: 2024/04/24 20:29:09 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *src)
{
	int		a;
	char	*dest;
	char	*d;

	a = 0;
	d = ((dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1)));
	if (d == NULL)
	{
		return (NULL);
	}
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

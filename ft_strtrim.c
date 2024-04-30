/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:27:38 by tsolanki          #+#    #+#             */
/*   Updated: 2024/04/30 12:29:45 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	char	*str;
	int		len;

	if (!s1 || !set)
		return (NULL);
	str = (char *)s1;
	while (*str)
	{
		if (ft_strchr(set, *str) == NULL)
			break ;
		str++;
	}
	len = ft_strlen(str);
	while (len)
	{
		if (ft_strchr(set, str[len - 1]) == NULL)
			break ;
		len--;
	}
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, str, len + 1);
	return (res);
}

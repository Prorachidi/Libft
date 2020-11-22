/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 21:36:27 by murachid          #+#    #+#             */
/*   Updated: 2019/11/08 11:36:03 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	if (src[i] == '\0')
		return ((char *)dest);
	if (dest == NULL && len == 0)
		return (NULL);
	while (dest[i] != '\0' && len > 0)
	{
		j = 0;
		l = len;
		while (dest[i + j] == src[j] && l > 0)
		{
			if (src[j + 1] == '\0')
				return ((char *)dest + i);
			j++;
			l--;
		}
		i++;
		len--;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 10:33:45 by murachid          #+#    #+#             */
/*   Updated: 2019/11/08 11:45:24 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	c2;
	unsigned char	*str2;

	i = 0;
	str2 = (unsigned char*)str;
	c2 = (unsigned char)c;
	while (i < n)
	{
		if (str2[i] == c2)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}

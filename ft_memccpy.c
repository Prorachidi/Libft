/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 12:35:09 by murachid          #+#    #+#             */
/*   Updated: 2019/11/08 11:37:17 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	k;
	size_t			i;
	unsigned char	*ptrd;
	unsigned char	*ptrs;

	ptrd = (unsigned char*)dst;
	ptrs = (unsigned char*)src;
	k = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		ptrd[i] = ptrs[i];
		if (ptrd[i] == k)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}

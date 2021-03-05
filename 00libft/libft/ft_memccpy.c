/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:24:21 by anunes-d          #+#    #+#             */
/*   Updated: 2021/03/05 00:24:54 by anunes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	size_t	i;
	char	*tdest;
	char	*tsrc;

	i = 0;
	tdest = (char *)dst;
	tsrc = (char *)src;
	while (i++ < n)
	{
		tdest[i] = tsrc[i];
		if ((unsigned char)tsrc[i] == (unsigned char)c)
			return ((char *)dst + i + 1);
	}
	return (NULL);
}

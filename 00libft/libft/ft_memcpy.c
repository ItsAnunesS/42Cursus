/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:37:00 by anunes-d          #+#    #+#             */
/*   Updated: 2021/03/05 04:30:05 by anunes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest,
		const void *restrict src, size_t n)
{
	size_t	i;
	unsigned char	*tdest;
	unsigned char	*tsrc;

	i = 0;
	tdest = (unsigned char*)dest;
	tsrc = (unsigned char*)src;
	if (!dest && !src)
		return (0);
	while (i++ < n)
		tdest[i] = tsrc[i];
	return (dest);
}

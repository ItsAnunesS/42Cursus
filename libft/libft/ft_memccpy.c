/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-d <anunes-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:24:21 by anunes-d          #+#    #+#             */
/*   Updated: 2021/03/05 19:22:11 by anunes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tdest;
	unsigned char	*tsrc;

	tdest = (unsigned char *)dst;
	tsrc = (unsigned char *)src;
	if (!tdest && !tsrc)
		return (0);
	while (n-- > 0)
	{
		*tdest = *tsrc;
		if (*tsrc == (unsigned char)c)
			return (tdest + 1);
		tdest++;
		tsrc++;
	}
	return (NULL);
}

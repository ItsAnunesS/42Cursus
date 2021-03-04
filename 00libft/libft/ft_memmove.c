/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 18:17:29 by anunes-d          #+#    #+#             */
/*   Updated: 2021/03/04 18:35:50 by anunes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *tdst;
	unsigned char *tsrc;

	tdst = (unsigned char*)dst;
	tsrc = (unsigned char*)src;
	if (!tdst && !tsrc)
	{
		tsrc += n;
		tdest += n;
		while (n--)
			*--tdst = *--tsrc;
	}
	else
		while (n--)
			*tdst++ = *tsrc++;
	return (dst);
}

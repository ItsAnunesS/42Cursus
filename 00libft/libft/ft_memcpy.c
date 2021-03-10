/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-d <anunes-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:37:00 by anunes-d          #+#    #+#             */
/*   Updated: 2021/03/05 17:33:50 by anunes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest,
		const void *src, size_t n)
{
	unsigned char	*tdest;
	unsigned char	*tsrc;

	tdest = (unsigned char*)dest;
	tsrc = (unsigned char*)src;
	if (!tdest && !tsrc)
		return (0);
	while (n-- > 0)
		*tdest++ = *tsrc++;
	return (dest);
}

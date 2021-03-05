/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 21:52:56 by anunes-d          #+#    #+#             */
/*   Updated: 2021/03/05 04:21:18 by anunes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * restrict dst,
		const char * restrict src, size_t dstsize)
{
	size_t	tsrc;
	size_t	tdst;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	tdst = ft_strlen(dst);
	tsrc = 0;
	while (src[tsrc] != '\0' && tdst + 1 < dstsize)
		dst[tdst++] = src[tsrc++];
	dst[tdst] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[tsrc]));
}

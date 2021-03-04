/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:31:02 by anunes-d          #+#    #+#             */
/*   Updated: 2021/03/04 21:41:04 by anunes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*result;

	result = b;
	while (len-- > 0)
		*result++ = (unsigned char)c;
	return (result);
}

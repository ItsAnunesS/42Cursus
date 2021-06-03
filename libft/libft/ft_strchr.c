/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-d <anunes-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 00:26:07 by anunes-d          #+#    #+#             */
/*   Updated: 2021/03/05 18:07:32 by anunes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char tmp;

	tmp = c;
	while (*s && *s != tmp)
		++s;
	return (char *)(tmp == (unsigned char)*s ? s : NULL);
}

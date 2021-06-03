/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-d <anunes-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 00:48:00 by anunes-d          #+#    #+#             */
/*   Updated: 2021/03/05 18:19:01 by anunes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	tmp;

	i = ft_strlen((char *)s);
	tmp = c;
	while (i != 0 && s[i] != tmp)
		i--;
	return (char *)(s[i] == tmp ? &s[i] : NULL);
}

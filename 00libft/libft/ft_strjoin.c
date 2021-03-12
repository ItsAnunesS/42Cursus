/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:21:45 by anunes-d          #+#    #+#             */
/*   Updated: 2021/03/12 17:14:49 by anunes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joinstr;

	joinstr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || (!s1 && !s2))
		return (NULL);
	ft_memcpy(joinstr, s1, ft_strlen(s1));
	ft_memcpy(joinstr + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (joinstr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 17:49:53 by anunes-d          #+#    #+#             */
/*   Updated: 2021/03/12 18:33:40 by anunes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	verify(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	size_t		i;
	size_t		len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	while (verify(s1[i], set) && s1[i] != '\0')
		i++;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	len = ft_strlen(&s1[i]);
	while (verify(s1[i + len - 1], set))
		len--;
	if (!(str = ft_substr(s1, (unsigned int)i, len)))
		return (NULL);
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 18:47:23 by anunes-d          #+#    #+#             */
/*   Updated: 2021/03/19 14:23:47 by anunes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strreve(char *s)
{
	int		i;
	int		len;
	char	tmp;

	i = 0;
	len = ft_strlen(s);
	while (i < len / 2)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
		i++;
	}
	return (s);
}

char		*ft_itoa(int n)
{
	char	arr[12];
	int		i;
	int		sign;

	ft_memset(arr, 0, 12);
	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	sign = (n < 0) ? -1 : 1;
	n = (n < 0) ? -n : n;
	while (n > 0)
	{
		arr[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	if (sign < 0)
		arr[i] = '-';
	ft_strreve(arr);
	return (ft_strdup(arr));
}

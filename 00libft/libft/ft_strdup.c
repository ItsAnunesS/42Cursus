/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 03:59:24 by anunes-d          #+#    #+#             */
/*   Updated: 2021/03/05 04:20:56 by anunes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
	int s_size;
    static char *dup;
    char *dup_offset;

	s_size = ft_strlen(s);
	dup = (char *)malloc(sizeof(char)*s_size+1);
	if(dup == NULL)
        return((char *)NULL);
	dup_offset = dup;

	while(*s)
    {
        *dup_offset = *s;
        dup_offset++;
        s++;
    }
    *dup_offset = '\0';

    return(dup);
}

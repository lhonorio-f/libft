/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhonorio <lhonorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:36:09 by lhonorio          #+#    #+#             */
/*   Updated: 2024/10/29 14:47:02 by lhonorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size > 0)
	{
		while (dest[i] && i < (size -1))
			++i;
		while (src[j] && (i + 1) < size)
		{
			dest[i] = src[j];
			++j;
			++i;
		}
		dest[i] = 0;
	}
	return (i);
}
/*
#include <stdio.h>

int     main(void)
{
    char    dest [] = "Bom dia ";
    char    src [] = "42_Lisboa";

    printf ("old src= %s\n", dest);
    printf ("i = %zu\n", ft_strlcat (dest, src, 30));
    printf ("new src= %s\n", dest);
    return (0);
}*/
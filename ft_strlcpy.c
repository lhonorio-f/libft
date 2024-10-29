/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhonorio <lhonorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:42:43 by lhonorio          #+#    #+#             */
/*   Updated: 2024/10/29 14:53:02 by lhonorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			++i;
		}
		dest[i] = 0;
	}
	while (src[i])
		++i;
	return (i);
}
/*
#include<stdio.h>
int     main(void)
{
    char    dest [] = "oi";
    char    src [] = "ui";

    printf ("old src= %s\n", dest);
    printf ("i = %d\n", ft_strlcpy (dest, src, 50));
    printf ("new src= %s\n", dest);
    return (0);
}*/

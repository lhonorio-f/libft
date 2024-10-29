/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhonorio <lhonorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:49:13 by lhonorio          #+#    #+#             */
/*   Updated: 2024/10/29 16:59:56 by lhonorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return (*s);
		s++;
	}
	if (c == '\0')
		return (*s);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("encontrei = %c\nb", ft_strchr("42_Lisboa", 'L'));
	return (0);
}*/

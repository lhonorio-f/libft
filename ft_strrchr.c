/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhonorio <lhonorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:04:19 by lhonorio          #+#    #+#             */
/*   Updated: 2024/10/29 17:28:08 by lhonorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		++i;
	}
	return (i);
}*/
char	ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == 0)
		return ('\0');
	while (i >= 0)
	{
		if (s[i] == c)
			return (c);
		i--;
	}
	return ('\0');
}
/*
#include <stdio.h>

int	main(void)
{
	printf("encontrei = %c\nb", ft_strrchr("42_Lisboa", '_'));
	return (0);
}*/

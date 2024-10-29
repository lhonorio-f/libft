/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhonorio <lhonorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:26:33 by lhonorio          #+#    #+#             */
/*   Updated: 2024/10/29 17:29:21 by lhonorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		++i;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
    printf("total = %d/n", ft_strlen("Bom dia"));
    return(0);
}*/
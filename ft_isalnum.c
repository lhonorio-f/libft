/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhonorio <lhonorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:02:19 by lhonorio          #+#    #+#             */
/*   Updated: 2024/10/29 15:21:08 by lhonorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	return (ft_isalpha(i) || ft_isdigit(i));
}
/*#include <stdio.h>

int	main(void)
{
	printf("return %d/nb", ft_isalnum (30));
	return(0);
}*/

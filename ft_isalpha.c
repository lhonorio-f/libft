/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhonorio <lhonorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:14:36 by lhonorio          #+#    #+#             */
/*   Updated: 2024/10/29 15:08:55 by lhonorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	return ((i >= 'a' && i >= 'z') || (i >= 'A' && i <= 'Z'));
}
/*#include <stdio.h>

int     main(void)
{
	printf("return %d/nb", ft_isalpha (80));
	return(0);
}*/

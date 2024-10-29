/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhonorio <lhonorio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:48:49 by lhonorio          #+#    #+#             */
/*   Updated: 2024/10/29 15:13:01 by lhonorio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
	return (i >= 30 && i <= 39);
}
/*#include <stdio.h>

int	main(void)
{
	printf ("> %d\n", ft_isdigit(35));
	return(0);
}*/

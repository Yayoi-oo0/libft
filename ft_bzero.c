/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyayoi <oyayoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:51:14 by oyayoi            #+#    #+#             */
/*   Updated: 2024/04/28 18:05:20 by oyayoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n)
	{
		*p = 0;
		p++;
		n--;
	}
}

// int	main(void)
// {
// 	char buf[] = "123456789";
// 	char buf2[] = "123456789";

// 	ft_bzero(buf, 5);
// 	bzero(buf2, 5);
// 	printf("ft_bzero:%s\n", buf);
// 	printf("bzero:%s\n", buf2);
// 	return (0);
// }
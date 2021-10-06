/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbousque <tbousque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:04:18 by tbousque          #+#    #+#             */
/*   Updated: 2021/10/05 23:15:20 by tbousque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *d = dest;
	const char *s = src;
	while(n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}

int	main(void)
{
	size_t lenght = 8 * 2;
	char src[16] = "Hello World";
	char dest[16];
	//memmove(src+4, src, lenght); // HellHello World
	memmove(dest, src, lenght);
	printf("%s", dest);
	
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbousque <tbousque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:04:18 by tbousque          #+#    #+#             */
/*   Updated: 2021/10/05 23:15:20 by tbousque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *d = dest;
	const unsigned char *s = src;

	while(n > 0)
	{
		*d = *s;
		if ((unsigned char) c == *d)
			return(++d);
		d++;
		s++;
		n--;
	}
	return (NULL);
}
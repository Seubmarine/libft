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
	if (dest == NULL && src == NULL)
		return (dest);
	while(n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}

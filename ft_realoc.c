/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realoc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbousque <tbousque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 01:00:58 by tbousque          #+#    #+#             */
/*   Updated: 2021/10/31 01:02:12 by tbousque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//false realoc, will defragment heap if used a lot.
void	*ft_realoc(void *ptr, size_t size)
{
	void	*newptr;

	if (size == 0)
		return (NULL);
	if (ptr == NULL)
		return (malloc(size));
	newptr = malloc(size);
	if (newptr == NULL)
		return (NULL);
	ft_memcpy(newptr, ptr, size);
	free(ptr);
	return (newptr);
}

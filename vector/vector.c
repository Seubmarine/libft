/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbousque <tbousque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 01:36:17 by tbousque          #+#    #+#             */
/*   Updated: 2021/10/31 16:46:11 by tbousque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

//push data at the end of the vec
//return a pointer to the first element of your data in the vec
void	*ft_vecpush(t_vec *vec, void *mem, size_t size)
{
	size_t	newcapacity;

	if (vec->size + size > vec->capacity)
	{
		newcapacity = ft_nextpow2(vec->size + size);
		vec->data = ft_realoc(vec->data, newcapacity);
		vec->capacity = newcapacity;
	}
	ft_memcpy(vec->data + vec->size, mem, size);
	vec->size += size;
	return (vec->data + vec->size - size);
}

t_vec	ft_vecnew(void)
{
	t_vec	newvec;

	newvec.capacity = 0;
	newvec.size = 0;
	newvec.data = NULL;
	return (newvec);
}

int	main(void)
{
	t_vec	vec;
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	vec = ft_vecnew();
	str1 = "Hello";
	str2 = " ";
	str3 = "World ";
	str4 = "!";
	ft_vecpush(&vec, str1, ft_strlen(str1));
	ft_vecpush(&vec, str2, ft_strlen(str2));
	ft_vecpush(&vec, str3, ft_strlen(str3));
	ft_vecpush(&vec, str4, ft_strlen(str4));
	ft_putendl_fd((char *)vec.data, 1);
	return (0);
}

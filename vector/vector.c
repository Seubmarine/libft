/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbousque <tbousque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 01:36:17 by tbousque          #+#    #+#             */
/*   Updated: 2021/10/15 01:23:21 by tbousque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

//Undefined behavior if used on number that are superior to 2 power 16
unsigned long nextpow2(unsigned long x)
{
	x--;
	x |= x >> 1;
	x |= x >> 2;
	x |= x >> 4;
	x |= x >> 8;
	x |= x >> 16;
	x++;
	return (x);
}

void *ft_realoc(void *ptr, size_t size)
{
	void *newptr;
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

static inline int exceed_capacity(t_vec *vec, size_t size)
{
	return (vec->size + size > vec->capacity);
}

void *push_mem(t_vec *vec, unsigned char *mem, size_t size)
{
	if (exceed_capacity(vec, size))
	{
		size_t newcapacity;
		
		newcapacity = nextpow2(vec->size + size);
		vec->data = ft_realoc(vec->data, newcapacity);
		vec->capacity = newcapacity;
	}

	ft_memcpy(vec->data + vec->size, mem, size);
	vec->size += size;
	return (vec->data + vec->size - size);
}

// void *create_vec()
// {
//     size_t size;
//     size_t capacity;
//     void *array;

//     void *array = malloc(sizeof(capacity) + sizeof(size));
//     array = size;
//     (array + sizeof(capacity)) = capacity;
// }

#include <stdio.h>
void main(void)
{
	t_vec vec = {.size = 0, .capacity = 0, .data = NULL};
	char *str1 = "Hello";
	char str2[1] = " ";
	char str3[6] = "World ";
	char str4[2] = "!";
	printf("sizeof str1 is %ld\n", sizeof(str1));
	push_mem(&vec, str1, ft_strlen(str1));
	push_mem(&vec, str2, sizeof(str2));
	push_mem(&vec, str3, sizeof(str3));
	push_mem(&vec, str4, sizeof(str4));
	printf("%s\n", (char *)vec.data);
}
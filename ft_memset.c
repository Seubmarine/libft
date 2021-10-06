/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbousque <tbousque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:21:12 by tbousque          #+#    #+#             */
/*   Updated: 2021/09/13 23:48:50 by tbousque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	*ft_memset(void *s, int c, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = c;
	return (s);
}
/*
#define SIZE 15
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define LEN 10

int main(void) {
	char arr[LEN];
	int loop;

	printf("Array elements are (before memset()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");

	//filling all blocks with 0
	memset(arr,0,LEN);
	printf("Array elements are (after memset()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");

	ft_memset(arr,1,2);
	printf("Array elements are (after memset()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");

	return 0;
}
*/

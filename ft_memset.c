/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbousque <tbousque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:21:12 by tbousque          #+#    #+#             */
/*   Updated: 2021/09/08 00:07:04 by tbousque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
void	*ft_memset(void *s, int c ,size_t n)
{
	while (n-- > 0)
		*(unsigned char *)s++ = c;
	return (s);
}

#define SIZE 15
#include <string.h>
#include <stdlib.h>

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

	//filling first 3 blocks with -1
	//and second 3 blocks with -2
	//and then 3 blocks with -3
	ft_memset(arr,1,2);
	//ft_memset(arr+3,-2,3);
	//ft_memset(arr+6,-3,3);
	printf("Array elements are (after memset()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");

	return 0;
}
/*
int	main(void)
{
	//void *data = malloc(sizeof(int) * SIZE_T);
	//ft_memset(data, 1, SIZE_T);
	int array[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int i = 0;
	while (i < SIZE)
		printf("%d,", array[i++]);
	printf("\n");
	memset(array, -3, sizeof(int) * SIZE);
	i = 0;
	while (i < SIZE)
		printf("%d,", array[i++]);
}
*/

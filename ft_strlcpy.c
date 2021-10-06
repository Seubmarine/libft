/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbousque <tbousque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:20:22 by tbousque          #+#    #+#             */
/*   Updated: 2021/10/06 19:03:54 by tbousque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsd/string.h"
#include "libft.h"
#include "stdio.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
		dst[i++] = src[i];
	dst[i] = '\0';
	return (ft_strlen(src));
}

#define MAX_PATH_LEN 0
int main(void)
{
	size_t len;
	char path[MAX_PATH_LEN];
	char *homedir = "/home/seub/libft";

	len = strlcpy(path, homedir, 0);
	printf("cpy len = %lu\n", len);
	//if (len >= sizeof(path))
	//	return (1); //error
	len = strlcat(path, "/", sizeof(path));
	//if (len >= sizeof(path))
	//	return (1); //error
	len = strlcat(path, ".foorc", sizeof(path));
	//if (len >= sizeof(path))
	//	return (1); //error
	//printf("%s\n", path);
	return (0);
}

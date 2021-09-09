/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbousque <tbousque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 04:37:34 by tbousque          #+#    #+#             */
/*   Updated: 2021/09/08 04:37:35 by tbousque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (*(unsigned char *)s++ != (unsigned char) c && --n);
	if (!n)
		return (NULL);
	return ((void *) --s);
}

#include <string.h>
int main(void)
{
    char    str[16] = "https://LOL.com";

    char *nstr = (char *)ft_memchr(str, 't', 16 * sizeof(char));
	if (!nstr)
		printf("NULL");
	else
    	printf("%s\n", nstr);
    return (0);
}

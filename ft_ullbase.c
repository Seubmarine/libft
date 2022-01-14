/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ullbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbousque <tbousque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 22:47:20 by tbousque          #+#    #+#             */
/*   Updated: 2022/01/14 21:33:40 by tbousque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Used to convert any unsigned number to a certain base,
//Create a string converting a number to it's string representaion,
//negative number won't be converted, -12 won't become 12.
//radix is size of the base

char	*ft_ullbase(unsigned long long n, char *base, int radix)
{
	unsigned long long	n_copy;
	int					len;
	char				*str;

	len = 1 ;
	n_copy = n;
	while (n_copy / radix)
	{
		n_copy /= radix;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		str[len - 1] = base[n % radix];
		n /= radix;
		len--;
	}
	return (str);
}

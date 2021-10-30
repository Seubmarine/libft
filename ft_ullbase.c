/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ullbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbousque <tbousque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 22:47:20 by tbousque          #+#    #+#             */
/*   Updated: 2021/10/30 22:48:38 by tbousque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Used to convert any unsigned number to a certain base,
//Create a string converting a number to it's string representaion,
//negative number won't be converted, -12 won't become 12.
//radix is size of the base
//invert will invert n, usefull when n is negative.
//if sign == 1 add '+', sign == 2 add '-', sign == 3.

char	*ft_ullbase(unsigned long long n, char *base, int radix, int sign)
{
	unsigned long long	n_copy;
	int					len;
	char				*str;

	len = 1 +(sign > 0);
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
	if (sign)
		str[0] = "-+"[sign - 1];
	return (str);
}

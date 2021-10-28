/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbousque <tbousque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 02:39:38 by tbousque          #+#    #+#             */
/*   Updated: 2021/10/28 12:56:00 by tbousque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define ABS(x) (x < 0 ? -x : x)
#include "libft.h"

//Used to convert any unsigned number to a certain base,
//Create a string converting a number to it's string representaion,
//negative number won't be converted, -12 won't become 12.
//radix is size of the base
//invert will invert n, usefull when n is negative.
//add a sign to the number if sign == 1 add '+', sign == 2 add '-'.
char	*ft_numto_base(unsigned long long n, char *base, int radix, int invert, int sign)
{
	int			len;
	unsigned long long	n_copy;
	char			*str;
	
	if (invert)
		n = -n;
	len = 1 + (sign > 0);
	n_copy = n;
	while (n_copy /= radix)
		len++;
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

char	*ft_itoa(int n)
{
	char 	*str;

	str = ft_numto_base(n, "0123456789", 10, n < 0, n < 0);
	if (str == NULL)
		return (NULL);
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbousque <tbousque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:31:32 by tbousque          #+#    #+#             */
/*   Updated: 2021/10/04 23:04:22 by tbousque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	number;
	int	sign;

	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	number = 0;
	while (*nptr && ft_isdigit(*nptr))
		number = (number * 10) + (*nptr++ - 48);
	return (number * sign);
}

#include<stdlib.h>
int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	if (argc == 2)
	{
		printf("ft : %d\n", ft_atoi(argv[1]));
		printf("std: %d\n", atoi(argv[1]));
	}
}

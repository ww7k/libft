/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwatik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 23:46:48 by wwatik            #+#    #+#             */
/*   Updated: 2022/11/05 21:46:21 by wwatik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static long	nb_char(long i)
{
	long	counter;

	counter = 0;
	if (i <= 0)
	{
		counter ++;
		i = -1 * i;
	}
	while (i > 0)
	{
		counter ++;
		i /= 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*p;
	long	nombre;
	long	len;

	nombre = n;
	len = nb_char(nombre);
	p = (char *)malloc(len + 1);
	if (!p)
		return (0);
	p[len--] = '\0';
	if (nombre < 0)
	{
		nombre *= -1;
		p[0] = '-';
	}
	if (nombre == 0)
		p[0] = 48;
	while (nombre)
	{
		p[len--] = nombre % 10 + '0';
		nombre /= 10;
	}
	return (p);
}

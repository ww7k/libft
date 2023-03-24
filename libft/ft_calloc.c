/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwatik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:55:22 by wwatik            #+#    #+#             */
/*   Updated: 2022/10/29 03:11:06 by wwatik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*a;

	a = (void *)malloc(size * count);
	if (!a)
		return (NULL);
	ft_bzero(a, size * count);
	return (a);
}

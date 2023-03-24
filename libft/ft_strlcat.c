/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwatik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 04:45:03 by wwatik            #+#    #+#             */
/*   Updated: 2022/11/05 21:54:17 by wwatik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		src1;
	size_t		val;

	if (dstsize == 0)
		return (ft_strlen(src));
	else if (dstsize < ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	else
		val = ft_strlen(src) + ft_strlen(dst);
	i = 0;
	while (dst[i] != '\0')
		i++;
	src1 = 0;
	while (src[src1] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[src1];
		src1++;
		i++;
	}
	dst[i] = '\0';
	return (val);
}

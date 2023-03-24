/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwatik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:39:24 by wwatik            #+#    #+#             */
/*   Updated: 2022/10/30 23:36:14 by wwatik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			i;
	int			j;
	char		*n;

	n = malloc(sizeof(char) * (ft_strlen((char *)s1) \
				+ ft_strlen((char *)s2) + 1));
	if (!s1 || !s2 || !n)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		n[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		n[j] = s2[i];
		i++;
		j++;
	}
	n[j] = '\0';
	return (n);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwatik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:54:58 by wwatik            #+#    #+#             */
/*   Updated: 2022/11/12 03:56:37 by wwatik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*n;

	if (!s)
		return (0);
	if (s[0] == '\0' || ft_strlen(s) <= start)
		return (ft_strdup(""));
	i = 0;
	while (s[start + i])
		i++;
	if (len > i)
		len = i;
	n = malloc(sizeof(char) * (len +1));
	if (!n)
		return (NULL);
	i = 0;
	while (start < ft_strlen((char *)s) && s[start + i] != '\0' && i < len)
	{
		n[i] = s[start + i];
		i++;
	}
	n[i] = '\0';
	return (n);
}

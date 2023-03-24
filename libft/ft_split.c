/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwatik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 23:46:08 by wwatik            #+#    #+#             */
/*   Updated: 2022/11/05 21:57:11 by wwatik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static size_t	counter(char const *s, char c)
{
	size_t	cnt;

	cnt = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			cnt++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (cnt);
}

static int	ft_wordlen(char const *str, char c)
{
	char	*s;
	int		i;

	i = 0;
	s = (char *)str;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**ft_freestr(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;

	i = 0;
	if (!s)
		return (0);
	str = malloc(sizeof(char *) * (counter(s, c) + 1));
	if (!str)
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			str[i] = ft_substr(s, 0, ft_wordlen(s, c));
			if (!str[i])
				return (ft_freestr(str));
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	str[i] = NULL;
	return (str);
}

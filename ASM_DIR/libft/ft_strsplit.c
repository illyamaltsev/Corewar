/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.o                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 16:45:52 by vhavryle          #+#    #+#             */
/*   Updated: 2017/11/09 16:45:54 by vhavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_splt4_w(const char *s, char c)
{
	int			b;
	int			i;

	b = 0;
	i = -1;
	if (s)
		while (s[++i] != '\0')
			if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
				b++;
	return (b);
}

static	char	**split_this(const char *s, char c, char **arr, int w)
{
	int			i;
	int			z;
	int			p;

	i = 0;
	p = 0;
	z = -1;
	while (--w != -1 && s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] != c)
			i++;
		arr[++z] = ft_strsub(s, p, i - p);
		p = ++i;
	}
	arr[++z] = NULL;
	return (arr);
}

char			**ft_strsplit(const char *s, char c)
{
	char		**arr;
	int			b;

	b = ft_splt4_w(s, c);
	if (!s)
		return (NULL);
	if (((arr = malloc(sizeof(char*) * (b + 1))) != 0) && s)
		arr = split_this(s, c, arr, b);
	return (arr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:24:32 by dojeanno          #+#    #+#             */
/*   Updated: 2023/04/11 18:07:22 by dojeanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	if (!s)
		return ;
	p = s;
	while (n-- > 0)
		*p++ = 0;
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = malloc(size * count);
	if (ptr == NULL)
		return (0);
	ft_bzero(ptr, (count * size));
	return ((void *)ptr);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

int	ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	if (!s)
		return (0);
	str = (char *)s;
	i = (int)ft_strlen(str);
	while (i > 0)
	{
		if (str[i] == (char)c)
			return (0);
		i--;
	}
	if (str[i] == (char)c)
		return (0);
	return (1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		y;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	y = 0;
	str = ft_calloc(sizeof(char), (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	free ((void *)s1);
	while (s2[y])
	{
		str[i] = s2[y];
		y++;
		i++;
	}
	return (str);
}

// Will need protections!
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onotteau <onotteau@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:22:46 by onotteau          #+#    #+#             */
/*   Updated: 2025/10/03 11:00:31 by onotteau         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (i < len && s1[i] != '\0')
	{
		j = 0;
		start = i;
		while (s2[j] != '\0' && s1[i] == s2[j] && start < len)
		{
			i++;
			j++;
			start++;
		}
		if (s2[j] == '\0')
			return ((char *)&s1[i - j]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	printf("Expected result: %s\n", strnstr("loremip ipsum", "ipsum", 15));
	printf("What we got: %s\n", ft_strnstr("loremip ipsum", "ipsum", 15));
}
*/

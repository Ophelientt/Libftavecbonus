/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onotteau <onotteau@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:29:33 by onotteau          #+#    #+#             */
/*   Updated: 2025/10/02 16:30:40 by onotteau         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	if (c == '\0')
		return ((char *) &s[i]);
	while (i >= 0)
	{
		if (s[i] == c)
		{
			return ((char *) &s[i]);
		}
		i--;
	}
	return (0);
}

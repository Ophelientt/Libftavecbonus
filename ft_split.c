/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onotteau <onotteau@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:54:43 by onotteau          #+#    #+#             */
/*   Updated: 2025/10/03 09:18:48 by onotteau         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	nb_mots;
	size_t	i;
	size_t	j;	
	size_t	len;
	size_t	start;
	char	**ptr;

	nb_mots = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			nb_mots++;
		}
		i++;
	}
	ptr = malloc ((nb_mots + 1) * sizeof (char *));
	if (ptr == NULL)
		return (NULL);
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i-1] == c))
		{
			start = i;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
			}
			len = i - start;	
			ptr[j++] = ft_substr (s, start, len);
			if (ptr[j - 1] == NULL)
			{
				while (j > 0)
					free (ptr[--j]);
				free (ptr);
				return (NULL);
			}
		}
		else
			i++;
	}
	ptr[j] = NULL;
	return (ptr);
}

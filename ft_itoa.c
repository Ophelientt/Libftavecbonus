/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onotteau <onotteau@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:56:23 by onotteau          #+#    #+#             */
/*   Updated: 2025/10/02 17:11:21 by onotteau         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	if (n == 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*str;

	len = ft_intlen(n);
	str = malloc (sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = len + 1;
	str[i] = '\0';
	while (n != 0)
	{
		str[i] = ((n % 10) + 48);
		n = n / 10;
		i--;
	}
	return (str);
}

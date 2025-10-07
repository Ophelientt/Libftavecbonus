/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onotteau <onotteau@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:32:09 by onotteau          #+#    #+#             */
/*   Updated: 2025/10/03 14:26:32 by onotteau         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdint.h"
#include <stdio.h>
#include <bsd/string.h>

// void	ft_bzero(void *ptr, size_t n)
// {
// 	unsigned char	*p;
// 	size_t			i;

// 	p = (unsigned char *)ptr;
// 	i = 0;
// 	while (i < n)
// 	{
// 		p[i] = 0;
// 		i++;
// 	}
// }

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;
	size_t	mem;

	mem = n * size;
	p = malloc (mem);
	if (mem == 0)
		return (NULL);
	ft_bzero (p, mem);
	return (p);
}

// int	main()
// {
// 	printf("Expected result: %s\n", (char *)calloc(5, 3));
// 	printf("What we got: %s\n", (char *)ft_calloc(5, 3));
// }
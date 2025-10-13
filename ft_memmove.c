/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:21:22 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/13 12:36:35 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0;
    if (dest > src && dest < src + n)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while(i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

int main(void)
{
	char dest[] = "allo";
	const char src[] = "ui";
	printf("%p", ft_memmove(dest, src, 8));
	return(0);
}


// if (dest < src)
// {
	
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:15:15 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/14 11:38:10 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*first;
	unsigned char	*second;

	i = 0;
	second = (unsigned char *)s2;
	first = (unsigned char *)s1;
	while (i < n && first[i])
	{
		if (first[i] != second[i])
		{
			return (first[i] - second[i]);
		}
		i++;
	}
	return (0);
}

// int main(void)
// {
//     const char s1[] = "bla";
//     const char s2[] = "ble";
//     printf("%d", ft_strncmp(s1, s2, 3));
//     return(0);
// }
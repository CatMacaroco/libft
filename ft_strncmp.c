/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:15:15 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/21 12:21:02 by cmacaroc         ###   ########.fr       */
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
	if (n == 0)
		return (0);
	while (i < n && first[i] && second[i])
	{
		if (first[i] != second[i])
		{
			return (first[i] - second[i]);
		}
		i++;
	}
	if (i == n)
		return (0);
	return (first[i] - second[i]);
}

// int main(void)
// {
//     const char s1[] = "bla";
//     const char s2[] = "bleggttg";
//     printf("%d", ft_strncmp(s1, s2, 5));
//     return(0);
// }
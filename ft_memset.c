/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:25:16 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/13 15:44:15 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*buf;

	buf = (unsigned char *)s;
	while (n > 0)
	{
		*buf = (unsigned char)c;
		n--;
		buf++;
	}
	return (s);
}

// int main(void)
// {
// 	char s[10];
// 	ft_memset(s, 'A', 5);
// 	s[5] = '\0';
// 	printf("%s\n", s);
// }
//
// void	*ft_memset(void *s, int c, size_t n)
// {
// 	void	*buf;
//
// 	buf = s;
// 	while (n > 0)
// 	{
// 		(*(unsigned char *)buf) = (unsigned char)c;
// 		n--;
// 		buf++;
// 	}
// 	return (s);
// }
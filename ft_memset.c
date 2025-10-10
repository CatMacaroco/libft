/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:25:16 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/10 19:27:44 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	void	*buf;

	buf = s;
	while (n > 0)
	{
		(*(unsigned char *)buf) = (unsigned char)c;
		n--;
		buf++;
	}
	return (s);
}
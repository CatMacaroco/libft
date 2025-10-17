/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:41:28 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/17 18:46:01 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, s, 1);
		s++;
	}
	write (fd, "\n", 1);
}

int main(void)
{
	char s[] = "allo";
	ft_putendl_fd(s, 1);
	return (0);
}
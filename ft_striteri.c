/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:46:32 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/17 19:35:29 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

// void capitalize (unsigned int i, char *c)
// {
// 	if ( i % 2 == 0 && *c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// }

// int main(void)
// {
// 	char s[] = "akki";
// 	ft_striteri(s, capitalize);
// 	printf("%s", s);
//     return (0);
// }
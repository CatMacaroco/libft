/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:36:11 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/17 12:56:44 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_length(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
	{
		length++;
	}
	while (n > 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		length;

	length = num_length(n);
	str = malloc(sizeof(char) * (length + 1));
	if (!str)
		return (0);
	str[length] = '\0';
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (0);
	}
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[--length] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

// int main(void)
// {
//     int n = 178;
//     printf("%s", ft_itoa(n));
//     return (0);
// }
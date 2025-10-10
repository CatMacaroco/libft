/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:24:44 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/10 19:49:21 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
    int i;
    int sign;
	int nb;

    i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
		sign = -sign;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

int main (void)
{
	char *str = "   +---736jj99";
	int a = ft_atoi(str);
	printf("%i", a);
	return 0;
}
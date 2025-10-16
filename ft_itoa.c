/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:36:11 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/16 16:11:46 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
    int i;
    char *str;
    int sign;
    int nb;

    i = 0;
    sign = 1;
    nb = 0;
    str = (char *)malloc(sizeof(n) + 1);
    while (nb >= 0)
    {
        str[i] = (nb % 10) + '0';
        i++;
    }
    if (n < 0)
    {
        sign = -sign;
    }
    
    return(str);
}

int main(void)
{
    int n = 178;
    printf("%s", ft_itoa(n));
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:36:11 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/16 17:05:27 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int num_length(int n)
{
    int length;
    
    length = 0;
    if (n <= 0)
    {
        length++;
        n = -n; //makes it positive
    }
    while (n > 0)
    {
        n = n / 10;
        length++;
    }
    return (length);
}

char *ft_itoa(int n)
{
    int length;
    char *str;
    long nb;

    length = num_length(n);
    nb = n;
    str = (char *)malloc(sizeof(char) * (length + 1));
    if (!str)
    {
        return (0);
    }
    str[length] = '\0';
    while (nb < 0)
    {
        str[0] = '-';
        nb = -nb;
    }
    while (--length >= 0 && str[length] != '-')
    {
        str[length] = (nb % 10) + '0';
        nb = nb / 10;
    }
    return(str);
}

int main(void)
{
    int n = 178;
    printf("%s", ft_itoa(n));
    return (0);
}
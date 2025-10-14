/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:41:53 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/14 18:29:20 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    size_t i;
    size_t numbof_squares;

    i = 0;
    numbof_squares = 0;
    if (numbof_squares == 0 || size == 0)
    {
        return (0);
    }
    while(i < size)
}

int main(void)
{
    size_t squares = 9;
    size_t size = 4;
    printf("%d", ft_calloc(members, size));
    return (0);
}

//this is like malloc and then change the memory to '\0' (used in bzero)
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:58:03 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/10 20:12:00 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dstlen;
    size_t i;
    size_t charsappend;

    dstlen = ft_strlen(dst);
    i = 0;
    if (size > 0 && dstlen < size)
    {
        charsappend = size - dstlen - 1;
        while (i < charsappend && src[i] != '\0')
        {
            dst[dstlen + i] = src[i];
            i++;
        }
        dst[dstlen + i] = '\0';
        return(dstlen + ft_strlen(src)); 
    }
    return (size + ft_strlen(src));
}

int main (void)
{
    char dst[] = "allo";
    const char src[] = "ezzi";
    int result = ft_strlcat(dst, src, 19);
    printf("%d", result);
    return (0);
}

//how can i call a function in a function ft_strlen
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:33:34 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/13 15:22:32 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == c)
            return((char *)&s[i]);
        i++;
    }
    if(s[i] == '\0')
    {
        return((char *)&s[i]);
    }
    return(0);
}

int main(void)
{
    int c = 'c';
    const char s[] = "alloca";
    printf("%s", ft_strchr(s, c));
    return (0);
}
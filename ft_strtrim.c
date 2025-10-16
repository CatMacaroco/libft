/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:20:13 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/16 14:57:26 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *trimmed_str;
    size_t i;
	size_t j;
    
    i = 0;
	j = 0;
	if (!s1 || !set)
		return (0);
	while(s1[i] != '\0')
	{
		if(s1[i] == set[j])
		{
			i++;
			j++;
		}
		
		trimmed_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
		trimmed_str[i] = '\0';
	}
    return (trimmed_str);
}

int main(void)
{
    char const s1[] = "bopaaaboperbop";
    char const set[] = "bop";
    printf("%s", ft_strtrim(s1, set));
    return(0);
}

//needs to be worked
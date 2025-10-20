/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:15:15 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/14 11:38:10 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!s || !f)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

//returns capital letters at even index numbers (2, 4, 6...)
// char example (unsigned int i, char c)
// {
// 	if ( i % 2 == 0 && c>= 'a' && c <= 'z')
// 		return c - 32;
// 	return c;
// }

// int main (void)
// {
// 	char const s[] = "allsso";
// 	char *result = ft_strmapi(s, example);
// 	printf("%s", result);
// 	return (0);
// }
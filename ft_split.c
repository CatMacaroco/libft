/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:53:35 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/16 16:05:35 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	numb_substrings(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c)
		{
			i++;
		}
		if (s[i] == '\0')
		{
			break ;
		}
		count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

char	*allocate_substr(const char *start, size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = start[i];
		i++;
	}
	substr[len] = '\0';
	return (substr);
}

char	**ft_free(char **result, size_t count)
{
	while (count > 0)
		free(result[--count]);
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	delimiter_count;
	char	**result;

	i = 0;
	k = 0;
	delimiter_count = numb_substrings(s, c);
	result = (char **)malloc(sizeof(char *) * (delimiter_count + 1));
	if (!s || !result)
		return (NULL);
	while (s[i] != '\0' && k < delimiter_count)
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		result[k++] = allocate_substr(&s[j], i - j);
		if (!result[k - 1])
			return (ft_free(result, k - 1));
	}
	result[k] = NULL;
	return (result);
}

// int main(void)
// {
//     char const s[] = "allo-sun-shine";
//     char c = '-';
//     char **result = ft_split(s, c);

//     if (!result) {
//         printf("Split failed\n");
//         return 1;
//     }

//     for (int i = 0; result[i] != NULL; i++) {
//         printf("Word %d: %s\n", i, result[i]);
//         free(result[i]); 
//     }
//     free(result);
//     return 0;
// }
//
// int main(void)
// {
//     char const s[] = "allo-sun-shine";
//     char c = '-';
// 	char **result = ft_split(s, c);
// 	//printf("%p", ft_split(s, c));
// 	printf("Word %d: %s\n", i, result[i]);
// 	int i = 0;
// 	while (result[i] != NULL)
// 	{
// 		printf("Word %d: %s\n", i, result[i]);
// 		i++;
// 		free(result[i]);
// 	}
// 	free (result);
//     return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:01:01 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/22 18:02:55 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

// Allocates memory using malloc and returns a new node. 
// The ’content’ member variable is
// initialized with the given parameter ’content’.
// The variable ’next’ is initialized to NULL.
t_list *ft_lstnew(void *content)
{
	t_list *things;

	things = (t_list *)malloc(sizeof(t_list));
	if (!things)
		return (NULL);
	
	things->content = content;
	things->next = NULL;
	
	return (things);
}
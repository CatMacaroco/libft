/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:39:46 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/23 11:56:37 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *result;
	
	if (!lst || !f || !del)
		return (NULL);
	
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
		result = (t_list *)malloc(sizeof(*lst));
		if (!result)
			del(lst);
			return (NULL);
	}
	return (result);
}
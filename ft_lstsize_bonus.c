/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:01:01 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/23 15:02:32 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//counts number of nodes in a list
int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*temp;

	count = 0;
	if (!lst)
		return (0);
	temp = lst;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}

// #include <assert.h>

// int main(void)
// {
// 	t_list *list;
// 	list = ft_lstnew("123");
// 	assert(ft_lstsize(list) == 1);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:01:01 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/23 10:55:29 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//counts number of nodes in a list
int ft_lstsize(t_list *lst)
{
	int count;
	t_list *temp;

	count = 0;
	temp = lst;
	if (!lst)
		return (NULL);
	while (temp->next != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
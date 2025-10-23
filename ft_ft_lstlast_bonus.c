/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_lstlast_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:01:01 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/23 10:27:40 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Returns the last node of the list
t_list *ft_lstlast(t_list *lst)
{
    t_list *temp;
    int i;

    temp = lst;
    i = 0;
    if (!lst)
        return (NULL);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return (temp);
}
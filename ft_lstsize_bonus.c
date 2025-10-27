/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmacaroc <cmacaroc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:01:01 by cmacaroc          #+#    #+#             */
/*   Updated: 2025/10/24 10:40:57 by cmacaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//counts number of nodes in a list
int	ft_lstsize(t_list *lst)
{
	int		count;
	//t_list	*temp;

	count = 0;
	if (!lst)
		return (0);
	//temp = lst;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
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

t_list *new_node(void *content)
{
    t_list *node = (t_list *)malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node->content = content;
    node->next = NULL;
    return (node);
}

// Main function
int main(void)
{
    // Create three nodes manually
    t_list *node1 = new_node("first");
    t_list *node2 = new_node("second");
    t_list *node3 = new_node("third");

    // Link the nodes together
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Test ft_lstsize
    printf("List size = %d\n", ft_lstsize(node1));

    // Free memory
    free(node1);
    free(node2);
    free(node3);

    return 0;
}


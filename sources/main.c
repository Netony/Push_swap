/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:56:55 by dajeon            #+#    #+#             */
/*   Updated: 2023/03/04 14:37:37 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include "stack.h"

void	ft_stlist(t_stack *node);
void	get(int *a, int count);
void	push(t_stack **head, int *a, int count);

int	main(void)
{
	t_stack *head;
	int		a[10];
	get(a, 10);
	head = ft_stnew(&a[0]);
	push(&head, a, 10);
	int i;
	i = 0;
	while (i++ < 5)
		ft_stpop(&head, free);
	return (0);
}

void	ft_stlist(t_stack *node)
{
	static int	i=1;

	printf("NODE[%d]-------------------------------\n", i);
	printf("NODE   : %p\n", node);
	printf("PREV   : %p\n", node->prev);
	printf("NEXT   : %p\n", node->next);
	printf("DATA   : %d\n", *(int *)(node->data));
	printf("CONT(P): %p\n", &(node->data));
	i++;
}

void	get(int *a, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		a[i] = i * 5;
		i++;
	}
}

void	push(t_stack **head, int *a, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		ft_stpush(head, &a[i]);
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:56:55 by dajeon            #+#    #+#             */
/*   Updated: 2023/02/14 16:18:35 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef	struct	s_list
{
	void			*data;
	struct s_list	*next;
}				t_list;

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i <= argc)
	{
		printf("%s\n", argv[i++]);
	}
}

int	ft_parser(char **argv, int i, int j)
{
	while (argv[i])
	{
		while (argv[i][j])
		{
			atoi_2 and more
				push
		}
		i++;
	}
}
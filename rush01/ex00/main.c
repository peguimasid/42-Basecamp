/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 03:15:50 by coder             #+#    #+#             */
/*   Updated: 2021/12/12 16:50:43 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_args(int argc, char **argv);
int		get_numbers(int *result, char *str);
int		solve(int tab[4][4], int clues[16], int pos);
void	display_solution(int tab[4][4]);

//	tab[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
//	int	clues[16] = {0};

void	create_table(int tab[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	tab[4][4];
	int	clues[16];

	create_table(tab);
	if (check_args(argc, argv))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	get_numbers(clues, argv[1]);
	if (solve(tab, clues, 0))
		display_solution(tab);
	else
		write(1, "Error\n", 6);
	return (0);
}

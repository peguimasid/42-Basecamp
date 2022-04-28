/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 04:06:27 by coder             #+#    #+#             */
/*   Updated: 2021/12/12 16:48:13 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check_case(int tab[4][4], int pos, int clues[16]);

int	check_double(int tab[4][4], int pos, int num)
{
	int	i;

	i = 0;
	while (i < pos / 4)
	{
		if (tab[i][pos % 4] == num)
			return (1);
		i++;
	}
	i = 0;
	while (i < pos % 4)
	{
		if (tab[pos / 4][i] == num)
			return (1);
		i++;
	}
	return (0);
}

void	display_solution(int tab[4][4])
{
	int	i;
	int	j;
	int	print_tab;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			print_tab = tab[i][j] + '0';
			printf("%c", print_tab);
			if (j != 3)
				printf(" ");
			j++;
		}
		printf("\n");
		i++;
	}
}

// line 48 = checking if the number I want to place is correct
// line 51 = checking if the tab is correct with the new number
// line 53 = check next possibility
int	solve(int tab[4][4], int clues[16], int pos)
{
	int	size;

	size = 0;
	if (pos == 16)
		return (1);
	while (++size <= 4)
	{
		if (!check_double(tab, pos, size))
		{
			tab[pos / 4][pos % 4] = size;
			if (check_case(tab, pos, clues) == 0)
			{
				if (solve(tab, clues, pos + 1))
					return (1);
			}
			else
				tab[pos / 4][pos % 4] = 0;
		}
	}
	return (0);
}

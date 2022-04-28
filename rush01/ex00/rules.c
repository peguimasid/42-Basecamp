/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 04:26:32 by coder             #+#    #+#             */
/*   Updated: 2021/12/12 04:26:33 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_col_up(int tab[4][4], int pos, int clues[16])
{
	int	i;
	int	max_size;
	int	visible_towers;

	i = 0;
	max_size = 0;
	visible_towers = 0;
	if (pos / 4 == 3)
	{
		while (i < 4)
		{
			if (tab[i][pos % 4] > max_size)
			{
				max_size = tab[i][pos % 4];
				visible_towers++;
			}
			i++;
		}
		if (clues[pos % 4] != visible_towers)
			return (1);
	}
	return (0);
}

int	check_row_right(int tab[4][4], int pos, int clues[16])
{
	int	i;
	int	max_size;
	int	visible_towers;

	i = 3;
	max_size = 0;
	visible_towers = 0;
	if (pos % 4 == 3)
	{
		while (i >= 0)
		{
			if (tab[pos / 4][i] > max_size)
			{
				max_size = tab[pos / 4][i];
				visible_towers++;
			}
			i--;
		}
		if (clues[12 + pos / 4] != visible_towers)
			return (1);
	}
	return (0);
}

int	check_col_down(int tab[4][4], int pos, int clues[16])
{
	int	i;
	int	max;
	int	visible_towers;

	i = 3;
	max = 0;
	visible_towers = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[i][pos % 4];
				visible_towers++;
			}
			i--;
		}
		if (clues[4 + pos % 4] != visible_towers)
			return (1);
	}
	return (0);
}

int	check_row_left(int tab[4][4], int pos, int clues[16])
{
	int	i;
	int	max;
	int	visible_towers;

	i = 0;
	max = 0;
	visible_towers = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{
			if (tab[pos / 4][i] > max)
			{
				max = tab[pos / 4][i];
				visible_towers++;
			}
			i++;
		}
		if (clues[8 + pos / 4] != visible_towers)
			return (1);
	}
	return (0);
}

int	check_case(int tab[4][4], int pos, int clues[16])
{
	if (check_row_left(tab, pos, clues) == 1)
		return (1);
	if (check_row_right(tab, pos, clues) == 1)
		return (1);
	if (check_col_down(tab, pos, clues) == 1)
		return (1);
	if (check_col_up(tab, pos, clues) == 1)
		return (1);
	return (0);
}

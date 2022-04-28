/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:53:59 by coder             #+#    #+#             */
/*   Updated: 2022/03/29 00:06:03 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int index_one, int index_two, int *tab)
{
	int	temp;

	temp = tab[index_one];
	tab[index_one] = tab[index_two];
	tab[index_two] = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	lowest;

	i = 0;
	while (i < size)
	{
		lowest = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[lowest])
				lowest = j;
			j++;
		}
		if (i != lowest)
			swap(i, lowest, tab);
		i++;
	}
}

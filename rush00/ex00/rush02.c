/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:16:15 by coder             #+#    #+#             */
/*   Updated: 2021/12/05 18:20:27 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int size, char corners_char, char middle_char)
{
	int	i;

	i = 0;
	while (i < size)
	{	
		if (i == 0 || i == size - 1)
		{
			ft_putchar(corners_char);
		}
		else
		{
			ft_putchar(middle_char);
		}
		i++;
	}
	if (size > 0)
	{
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (i == 0)
		{
			print_line(x, 'A', 'B');
		}
		if (i != 0 && i != y - 1)
		{
			print_line(x, 'B', ' ');
		}
		if (i == y - 1 && y > 1)
		{
			print_line(x, 'C', 'B');
		}
		i++;
	}
}

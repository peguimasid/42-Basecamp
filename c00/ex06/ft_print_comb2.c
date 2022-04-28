/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:14:56 by coder             #+#    #+#             */
/*   Updated: 2021/12/07 21:20:14 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_space_and_comma(int first_counter, int second_counter)
{
	if (!(first_counter == 0 && second_counter == 1))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb2(void)
{
	char	print_char;
	int		first_counter;
	int		second_counter;

	first_counter = 0;
	second_counter = 1;
	while (first_counter < 99)
	{
		print_space_and_comma(first_counter, second_counter);
		print_char = first_counter / 10 + '0';
		write(1, &print_char, 1);
		print_char = first_counter % 10 + '0';
		write(1, &print_char, 1);
		write(1, " ", 1);
		print_char = second_counter / 10 + '0';
		write(1, &print_char, 1);
		print_char = second_counter % 10 + '0';
		write(1, &print_char, 1);
		second_counter++;
		if (second_counter == 100)
			second_counter = ++first_counter + 1;
	}
}

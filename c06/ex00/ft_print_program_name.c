/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:27:13 by coder             #+#    #+#             */
/*   Updated: 2021/12/16 18:33:06 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

int	main(int argc, char *argv[])
{
	unsigned int	n;
	char			*str;

	if (argc > 0)
	{
		n = 0;
		str = argv[0];
		while (*str++ != '\0')
			n++;
		write(1, argv[0], n);
		write(1, "\n", 1);
	}
}

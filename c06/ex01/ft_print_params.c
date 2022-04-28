/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:42:22 by coder             #+#    #+#             */
/*   Updated: 2021/12/16 18:42:29 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	unsigned int	n;
	int				i;
	char			*str;

	i = 0;
	while (++i < argc)
	{
		n = 0;
		str = argv[i];
		while (*str++ != '\0')
			n++;
		write(1, argv[i], n);
		write(1, "\n", 1);
	}
}

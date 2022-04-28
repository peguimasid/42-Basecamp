/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:46:25 by coder             #+#    #+#             */
/*   Updated: 2021/12/16 18:53:50 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	unsigned int	n;
	char			*str;

	while (--argc > 0)
	{
		n = 0;
		str = argv[argc];
		while (*str++ != '\0')
			n++;
		write(1, argv[argc], n);
		write(1, "\n", 1);
	}
}

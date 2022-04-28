/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:03:45 by coder             #+#    #+#             */
/*   Updated: 2021/12/11 14:34:36 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_printable_char;

	i = 0;
	while (str[i] != '\0')
	{
		is_printable_char = (str[i] >= 32 && str[i] < 127);
		if (!is_printable_char)
			return (0);
		i++;
	}
	return (1);
}

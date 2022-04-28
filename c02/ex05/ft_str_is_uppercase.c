/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 13:57:55 by coder             #+#    #+#             */
/*   Updated: 2021/12/11 14:00:12 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	is_uppercase_letter;

	i = 0;
	while (str[i] != '\0')
	{
		is_uppercase_letter = (str[i] >= 'A' && str[i] <= 'Z');
		if (!is_uppercase_letter)
			return (0);
		i++;
	}
	return (1);
}

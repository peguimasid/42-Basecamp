/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 12:57:58 by coder             #+#    #+#             */
/*   Updated: 2021/12/11 13:06:24 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is_lowercase_letter;

	i = 0;
	while (str[i] != '\0')
	{
		is_lowercase_letter = (str[i] >= 'a' && str[i] <= 'z');
		if (!is_lowercase_letter)
			return (0);
		i++;
	}
	return (1);
}

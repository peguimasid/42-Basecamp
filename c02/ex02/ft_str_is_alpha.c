/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:44:43 by coder             #+#    #+#             */
/*   Updated: 2021/12/10 16:11:17 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_lowercase_letter;
	int	is_uppercase_letter;

	i = 0;
	while (str[i] != '\0')
	{
		is_lowercase_letter = (str[i] >= 'a' && str[i] <= 'z');
		is_uppercase_letter = (str[i] >= 'A' && str[i] <= 'Z');
		if (!is_lowercase_letter && !is_uppercase_letter)
			return (0);
		i++;
	}
	return (1);
}

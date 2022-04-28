/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:13:38 by coder             #+#    #+#             */
/*   Updated: 2021/12/11 16:15:07 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowercase_letter(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_uppercase_letter(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_normal_char(char c)
{
	int	is_lowercase_letter;
	int	is_uppercase_letter;
	int	is_number;

	is_lowercase_letter = (c >= 'a' && c <= 'z');
	is_uppercase_letter = (c >= 'A' && c <= 'Z');
	is_number = (c >= '0' && c <= '9');
	return (is_lowercase_letter || is_uppercase_letter || is_number);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	should_upper;

	i = 0;
	should_upper = 1;
	while (str[i] != '\0')
	{
		if (is_normal_char(str[i]))
		{
			if (should_upper && is_lowercase_letter(str[i]))
				str[i] -= 32;
			if (!should_upper && is_uppercase_letter(str[i]))
				str[i] += 32;
			should_upper = 0;
		}
		else
		{
			should_upper = 1;
		}
		i++;
	}
	return (str);
}

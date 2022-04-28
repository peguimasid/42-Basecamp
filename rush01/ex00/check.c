/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:21:12 by coder             #+#    #+#             */
/*   Updated: 2021/12/12 01:21:23 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	only_numbers(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9') && !(str[i] == ' '))
			return (1);
		i++;
	}
	return (0);
}

int	sixteen_numbers(char *str)
{
	int	i;
	int	nums_count;

	i = 0;
	nums_count = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			nums_count++;
		i++;
	}
	if (nums_count != 16)
		return (1);
	return (0);
}

int	between_zero_and_four(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '1' || str[i] > '4') && !(str[i] == ' '))
			return (1);
		i++;
	}
	return (0);
}

int	check_args(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	if (ft_strlen(argv[1]) != 31)
		return (1);
	if (only_numbers(argv[1]))
		return (1);
	if (sixteen_numbers(argv[1]))
		return (1);
	if (between_zero_and_four(argv[1]))
		return (1);
	return (0);
}

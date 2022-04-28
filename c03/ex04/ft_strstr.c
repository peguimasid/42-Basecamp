/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:18:13 by coder             #+#    #+#             */
/*   Updated: 2021/12/13 20:27:58 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*work_str;
	char	*work_find;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		work_str = str;
		work_find = to_find;
		while (*work_str == *work_find
			&& *work_str != '\0'
			&& *work_find != '\0')
		{
			work_str++;
			work_find++;
		}
		if (*work_find == '\0')
			return (str);
		str++;
	}
	return (0);
}

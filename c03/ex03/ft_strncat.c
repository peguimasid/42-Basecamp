/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:55:09 by coder             #+#    #+#             */
/*   Updated: 2021/12/13 20:27:43 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*result;
	unsigned int	i;

	i = 0;
	result = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && i++ < nb)
		*dest++ = *src++;
	*dest++ = '\0';
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabejide <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:53:59 by oabejide          #+#    #+#             */
/*   Updated: 2024/03/14 14:55:40 by oabejide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
	i++;
	while (str[i] != '\0')
	{
		if ((str[i - 1] >= 32 && str[i - 1] < 65)
			&& (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

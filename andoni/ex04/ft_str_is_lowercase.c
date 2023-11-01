/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arios-he <arios-he@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:03:00 by arios-he          #+#    #+#             */
/*   Updated: 2023/10/25 11:43:16 by vidiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}

int	main()
{
	char str[10] = "Alberto";
	ft_str_is_lowercase(str);
	if (ft_str_is_lowercase(str))
		printf("La cadena esta en minusculas%s", str);
	else
		printf("La cadena no esta en minusculas:%s", str);

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arios-he <arios-he@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:21:34 by arios-he          #+#    #+#             */
/*   Updated: 2023/10/25 11:44:34 by vidiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

int	main()
{
	char str[10] = "HOLA";
	ft_str_is_uppercase(str);
	if (ft_str_is_uppercase(str))
		printf("La cadena esta en mayusculas");
	else
		printf("La cadena no esta solo en mayus");
	return (0);
}

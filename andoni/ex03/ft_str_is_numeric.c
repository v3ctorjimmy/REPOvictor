/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arios-he <arios-he@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:55:10 by arios-he          #+#    #+#             */
/*   Updated: 2023/10/25 11:41:48 by vidiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
		continue ;
	}
	return (1);
}

int	main()
{
	char str[10] = "1234453";
	ft_str_is_numeric(&str[0]);
	if (ft_str_is_numeric(str))
		printf("LA cadena es numerica");
	else
		printf("La cadena no es numerica");
	return (0);
}

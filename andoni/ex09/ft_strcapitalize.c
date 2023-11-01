/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arios-he <arios-he@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:38:46 by arios-he          #+#    #+#             */
/*   Updated: 2023/10/25 11:51:39 by vidiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	cap;

	cap = 0;
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') && cap == 0)
			*str = *str - 32;
		if ((*str >= 'A' && *str <= 'Z') && cap != 0)
			*str = *str + 32;
		cap++;
		if (*str < 65 && !(*str <= '9' && *str >= '0'))
			cap = 0;
		str++;
	}
	return (str);
}

int	main()
{
	char str[15] = "ho l+a m5u";
	ft_strcapitalize(str);
	printf("El resultado es %s", str);
	return (0);
}

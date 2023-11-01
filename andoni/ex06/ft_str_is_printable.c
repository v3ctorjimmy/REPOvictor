/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arios-he <arios-he@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:31:09 by arios-he          #+#    #+#             */
/*   Updated: 2023/10/25 11:46:04 by vidiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}

int	main()
{
	char str[10] = "Albert5";
	ft_str_is_printable(str);
	if (ft_str_is_printable(str))
		printf("Son caracteres imprimibles");
	else
		printf("No son caracteres imprimibles");
	return (0);
}

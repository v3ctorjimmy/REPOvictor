/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vidiaz <vidiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:40:21 by vidiaz            #+#    #+#             */
/*   Updated: 2023/11/02 13:09:40 by vidiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str[10];

	str[10] = "\n";
	ft_str_is_printable(str);
	if (ft_str_is_printable(str))
	{	
		printf("SonImprimibles");
	}
	else
	{
		printf("NoSonImprimibles");
	}
	return (0);
}*/

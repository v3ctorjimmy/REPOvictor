/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vidiaz <vidiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:53:43 by vidiaz            #+#    #+#             */
/*   Updated: 2023/11/02 13:19:39 by vidiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}	
	while (i < n)
	{
			dest[i] = '\0';
			i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	*src;
	char	dest[6];

	src = "bombas";
	ft_strncpy(dest, src, 3);
	printf("%s\n", dest);
	return (0);
}*/

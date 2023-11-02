/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vidiaz <vidiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:28:40 by vidiaz            #+#    #+#             */
/*   Updated: 2023/10/31 15:17:12 by vidiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size -1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

// void	imprimir(int num[], int size)
// {
// 	int	i;

// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d", num[i]);
// 		i++;
// 	}
// }

// int	main(void)
// {
// 	int	size;

// 	size = 6;
// 	int num[6] = {6, 5, 4, 3, 2, 1};
// 	ft_rev_int_tab(num, size);
// 	imprimir(num, size);
// 	return (0);
// }

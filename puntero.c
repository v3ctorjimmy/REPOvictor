/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puntero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:38:30 by victor            #+#    #+#             */
/*   Updated: 2023/10/23 21:38:32 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int valor;
	int *nbr; 
	nbr = &valor;

	ft_ft(nbr);
	printf("%d",valor);
	return(0);	
}

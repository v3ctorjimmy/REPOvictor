/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:51:18 by victor            #+#    #+#             */
/*   Updated: 2023/10/28 19:05:57 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int ord;
    int bubble;
   
    ord = 1;
    while(ord == 1)
    {
        i = 0;
        ord = 0;
        while(i < size)
        { 
            if(tab[i] > tab[i+1])
            {
                
                bubble = tab[i];
                tab[i]  =   tab[i+1];
                tab[i+1] =  bubble;
                ord = 1;
           }
        i++;
        }
    }
}
void imprimir(int num[], int size)
 {
     int i;
     i = 0;
     while(i < size)
     {
         printf("%d", num[i]);
         i++;
     }
}
int main(void)
{
    int size =6;
    int num[6] = {3,8,4,6,2,1};
    printf("antes:");
    imprimir(num,size);
    ft_sort_int_tab(num, size);
    printf("\nDespues:");
    imprimir(num,size);

}
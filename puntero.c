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


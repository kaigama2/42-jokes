#include "../../includes/piscine.h"

void ft_swap(int *a, int *b)
{
	int temp;
	temp = *a + *b;
	*a = *b;
	*b = temp;
}
void ft_printout(int nbr)
{
	int i;
	int a;
	int b;

	a = 0;
	b = 1;
	i = 1;
	while (i <= nbr)
	{
		ft_swap(&a, &b);
		printf("%d ", a);
		i++;
	}
}
int ft_fibonacci(int nbr)
{
	if (nbr < 0)
		return (-1);
	if (nbr < 2)
		return (1);
	// the fibonacci series of a number is the sum of two
	// previous numbers and fibonacci number always starts
	// from 1
	return (ft_fibonacci(nbr - 1) + ft_fibonacci(nbr - 2));
}
int main()
{
	int n;
	n = 6;
	ft_printout(n);
	printf("%d\n", ft_fibonacci(n));
	return (0);
}
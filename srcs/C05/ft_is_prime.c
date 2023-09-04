#include "../../includes/piscine.h"

// any number that is not the product of 2 is a prime number
int ft_is_prime(int nbr)
{
	int n;
	n = 2;
	while (n <= (nbr / n))
	{
		// after division without remainder return 0
		if (nbr % n == 0)
			return (0);
		n++;
	}
	// otherwise return (1);
	return (1);
}
int main()
{
	printf("%d\n", ft_is_prime(1));
	return (0);
}
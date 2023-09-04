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
int ft_find_next_prime(int nb)
{
	nb++;
	// here ! means evaluate the next number after the previous number
	while (!ft_is_prime(nb))
	{
		//move on to the next prime number
		nb++;
	}
	return (nb);
}
int main()
{
	printf("%d\n", ft_find_next_prime(5));
	return (0);
}
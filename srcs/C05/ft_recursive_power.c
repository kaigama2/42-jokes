#include "../../includes/piscine.h"
int ft_recursive_power(int nbr, int power)
{
	if (nbr < 0 || nbr > 12)
		return (0);
	if (power == 0)
		return (1);
	// decrement power by one (1) where 4 * 4 is 1 and 0 binary
	// system of representing number in base 2 here
	return (nbr * ft_recursive_power(nbr, power - 1));
}
int main()
{
	printf("%d\n", ft_recursive_power(4, 2));
	return (0);
}
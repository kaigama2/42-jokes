#include "../../includes/piscine.h"

int ft_recursive_factorial(int nbr)
{
	if (nbr < 0 || nbr > 12)
		return (0);
	// when nbr is now one return the result of our function call
	if (nbr == 1)
		return (1);
	// check the given argument to position one in nbr
	// this call is similar to loop call in ft_iterative_factorial function
	return (nbr * ft_recursive_factorial(nbr - 1));
}
int main()
{
	printf("%d\n", ft_recursive_factorial(5));
	return (0);
}
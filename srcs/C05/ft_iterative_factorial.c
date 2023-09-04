#include "../../includes/piscine.h"

//Create an iterated function that returns a number. This number
// is the result of a factorial operation based on the number given as a parameter.
int ft_iterative_factorial(int nbr)
{
	int result;

	if (nbr < 0 || nbr > 12)
		return (0);

	// check the given argument to position one in result
	while (nbr > 1)
	{
		// !5 = 5 * 4 * 3 * 2 * 1 = 120
		result = result * nbr;
		nbr--;
	}
	return (result);
}
int main()
{
	printf("%d\n", ft_iterative_factorial(5));
	return (0);
}
#include "../../includes/piscine.h"

int ft_iterative_power(int nbr, int power)
{
	int result;

	result = 1;
	if (nbr < 0 || nbr > 12)
		return (0);
	// remember when power is 0 let's return 1 true or result of the operation
	if (power == 0)
		return (1);
	while (power)
	{
		result = result * nbr;
		power--;
	}
	return (result);
}
int main()
{
	printf("%d\n", ft_iterative_power(8, 2));
	return (0);
}
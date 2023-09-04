#include "../../includes/piscine.h"
int ft_sqrt(int nb)
{
	int i;
	i = 0;
	// check each number starting from zero
	// to see when multiply give us our argument
	// 0 * 0 == 3 no an irrational number otherwise return 0
	// or 1 * 1 == 2 or 2 * 2 == 4 
	while (i * i < nb)
	{
		i++;
	}
	// testing 0, 1, i++ continuously to find our argument
	if (i * i == nb)
		return (i);
	// otherwise return 0 if irrational number is given as our
	// argument
	return (0);
}
int main()
{
	printf("%d\n", ft_sqrt(5));
	return (0);
}
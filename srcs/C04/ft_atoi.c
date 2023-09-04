#include "../../includes/piscine.h"

int ft_atoi(char *str)
{
	int i;
	int negative;
	int result;

	i = 0;
	negative = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		// check the first position of the numbers
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * negative);
}
int main()
{
    char str[] = "  ---+--+1234ab567";
    printf ("%d\n", ft_atoi(str));
    return (0);
}

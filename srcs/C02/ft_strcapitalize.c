#include "../../includes/piscine.h"

char *ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
        // i is for counting through the string while - 1 is for 
        // testing first position of the string and + 1 is for testing
        // the last position of the string
		if (str[i - 1] < 48 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
int main()
{
	char str[] = "god is great";
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
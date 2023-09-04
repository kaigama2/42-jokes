#include "../../includes/piscine.h"

// note + 1 is for locating last position of a string
char *ft_strstr(char *str, char *str_part)
{
	int i;
	int x;

	i = 0;
	x = 0;
	// evaluate the statement if the given variable is either
	// a pointer to anything

	if (!str || !str_part)
		return (NULL);
	while (str[i] != '\0')
	{
		// count the char in str[i] to the cut string
		while (str[i + x] == str_part[x])
		{
			// null terminate both str[i] and str_part[x] continue counting 
			// from the remaining string to the null terminator
			// the two equator sign == is for null terminator for two string
			if (str_part[x + 1] == '\0')
					return (&str[i]);
			x++;
		}
		i++;
	}
	// if the while statement doesn't executes return a null pointer
	return (NULL);
}
int main()
{
	char str[] = "God Is Great";
	char str_part[] = "Great";
	printf("%s\n", ft_strstr(str, str_part));
	return (0);
}
#include "../../includes/piscine.h"

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		// here you said
		// char *str;
		// str = (void *)c in write function
		// while str[i] represent char and not pointer to character (char *)
		write (1, &str[i], 1);
		i++;
	}
}
int main()
{
	char str[] = "Kaigama\n";
	ft_putstr(str);
	return (0);
}

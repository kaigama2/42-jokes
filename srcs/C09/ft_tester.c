#include "./includes/libft.h"
#include "ft_putchar.c"
#include "ft_putstr.c"
#include "ft_split.c"

int main()
{
    char *str;
    char **array;
	int i;
	i = 0;
	char *string = "$\tGOD is the Greatest$ in Heaven";
	array = ft_split(string, "$");
	printf("%s\n", array[i]);
    str = "You've seen the complete test right";
    ft_putstr(str);
    ft_putchar('\n');
    return (0);
}

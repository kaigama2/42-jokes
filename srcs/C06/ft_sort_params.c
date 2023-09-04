#include "../../includes/piscine.h"

void ft_putchar(char c)
{
	write (1, &c, 1);
}
void ft_putarg(char **argv)
{
	int i;
	int x;
	x = 1;
// count the number of character on the command line
	while (argv[x])
	{
		i = 0;
// write the number of character on the command line
		while (argv[x][i])
		{
			ft_putchar(argv[x][i]);
			ft_putchar(' ');
			i++;
		}
		x++;
	}
}
// here we're using a different version of swap program because
// of the arguments(char **) being passed to the function...
// Notice that *a is an alias to a also
void ft_swapping(char *a, char *b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int ft_strcmp(char *str, char *str1)
{
	int i;
	i = 0;
	while (str[i] && str1[i] && str[i] == str1[i])
		i++;
	return(str[i] - str1[i]);
}
void ft_sort_params(int argc, char **argv)
{
	int i;
	int x;
	i = 1;
// count the number of bytes on the command line
	while (x < argc)
	{
// comparing the number of bytes on the command line by
// arranging it in ascending order
		i = 0;
		while (i < argc)
		{
// pause during bit counting for arranging bit in ascending order
// after comparism
			if (ft_strcmp(argv[x], argv[i]) < 0)
			{
				ft_swapping(argv[x], argv[i]);
			}
			i++;
		}
		x++;
	}
// after the ascending arrangement, we print out our result now
// by pass char ** to a function with char **
	ft_putarg(argv);
	ft_putchar('\n');
}
int main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	return(0);
}
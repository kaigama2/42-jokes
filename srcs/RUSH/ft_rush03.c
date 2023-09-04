#include "ft_putchar.c"

void	ft_rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
			ft_print(x, 'A', 'B', 'C');
		else if (i <= (y - 1))
			ft_print(x, 'B', ' ', 'B');
		if (i == y)
			ft_print(x, 'A', 'B', 'C');
		ft_putchar('\n');
		i++;
	}
}


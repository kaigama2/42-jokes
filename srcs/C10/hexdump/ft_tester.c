#include "ft_hexadump.h"
#include "ft_hexadump.c"

int		main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		size;

	i = 0;
	while (++i < argc)
	{
		if (!(*argv[i] == '-' && *(argv[i] + 1) == 'C'))
		{
			size = ft_file_size(argv[i]);
			str = ft_copy_input(argv[i], size);
			ft_hexdump(str, size);
		}
	}
	return 0;
}
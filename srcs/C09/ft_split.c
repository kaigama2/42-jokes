#include "../../includes/piscine.h"

int ft_search_4_separator(char char_found, char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == char_found)
			return (true);
		i++;
	}
	return (false);
}
int ft_search_count(char *str, char *sep)
{
	int start_count;
	int find_space;
	int i;
	i = 0;
	start_count = 0;
	find_space = 1;
	while (str[i] != '\0')
	{
		if (!ft_search_4_separator(str[i], sep) && find_space)
		{
			// find strlen and call function for separator in string
			start_count += 1;
			find_space = 0;
		}
		else if (find_space == 0 && ft_search_4_separator(str[i], sep))
			find_space = 1;
		i++;
	}
	return (start_count);
}
char *ft_get_sep_word(char *str, char *word)
{
	int i;
	int total_len;
	char *dest;
	total_len = 0;
	// find the length of the string then call the function
	// for searching separator in string
	while (!ft_search_4_separator(str[total_len], word))
		total_len += 1;
	if (!(dest = (char *)malloc(sizeof(char *) * (total_len + 1))))
		return (false);
	i = 0;
	while (i < total_len)
	{
		dest[i] = *str;
		str++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
char **ft_split(char *str, char *charset)
{
	char **array;
	int i;
	int search_len;
	search_len = 0;
	search_len = ft_search_count(str, charset);
	// putting char ** and sizeof(char *) is always necessary
	if (!(array = (char **)malloc(sizeof(char *) * (search_len + 1))))
		return (false);
	i = 0;
	while (i < search_len)
	{
		while (ft_search_4_separator(*str, charset))
			str += 1;
		array[i] = ft_get_sep_word(str, charset);
		i++;
	}
	array[i] = NULL;
	return (array);
}
// int main()
// {
// 	char **array;
// 	int i;
// 	i = 0;
// 	char *str = "$GOD is the Greatest$ in Heaven";
// 	array = ft_split(str, "$");
// 	printf("%s\n", array[i]);
// 	return (0);
// }

#include "../../includes/piscine.h"

int ft_sep_found(char c, char *sep)
{
	int i;
	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}
int ft_strlength(char *str, char *sep)
{
	int i;
	int sep_found;
	i = 0;
	sep_found = 1;
	while (str[i])
	{
// check the string for separator and evaluate the next char
// after evaluating the previous char or value
		if (!ft_sep_found(str[i], sep) && sep_found)
		{
			i++;
// here if separator is not found return 0
			sep_found = 0;
		}
		else if (sep_found == 0 && ft_sep_found(str[i], sep))
// here if separator is found return 1
			sep_found = 1;
		i++;
	}
	return (i);
}
char *ft_strdup(char *str, char *sep)
{
	int i;
	int len;
	char *dest;
	
	i = 0;
	len = 0;
// continue from the previous wrapped string returned
// by rechecking the wrapped up string 
	while (!ft_sep_found(str[len], sep))
		len++;
	if (!(dest = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
char **ft_split(char *str, char *sep)
{
	char **array;
	int i;
	int len;
	i = 0;

	len = ft_strlength(str, sep);
	if (!(array = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	while (i < len)
	{
	// *str/str indicates we're specifying a string and str[i] means
	// we're specifying a char c when passing them into a function
	// call also, *str is used for incrementing as in str++
		while (ft_sep_found(*str, sep))
			str++;
		array[i] = ft_strdup(str, sep);
		str++;
		i++;
	}
	array[i] = NULL;
	return (array);
}
int main()
{
	char **p;
	int i;
	i = 0;
// the string here wouldn't be modifiable according to
// the question in the subject
	char *str = "$God is the King$ of all kings";
	p = ft_split(str, "$");
	printf("%s\n", p[i]);
	return (0);
}
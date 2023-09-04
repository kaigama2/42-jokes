#include "../../includes/piscine.h"

// The strlcpy() and strlcat() functions copy and
// concatenate strings respectively.

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_strlcat(char *dest, char *src, int size)
{
	int i;
	int len;
	int src_l;
	int dst_l;

	i = 0;
	src_l = ft_strlen(src);
	dst_l = ft_strlen(dest);

	if (i < size)
		len = src_l + dst_l;
    // Here providing null terminating space for destination
	while (src[i] != '\0' && (dst_l + 1) < size)
	{
		dest[dst_l] = src[i];
		i++;
		dst_l++;
	}
	dest[dst_l] = '\0';
    // returning the total length of string the try to create;
    // the length of dst_l plus the length of src_l
	return (len);
}
int main()
{
    char dest[7];
    char str[] = "Kaigama";
    printf("%d\n", ft_strlcat(dest, str, 7));
    return (0);
}
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#define Buffer_size 42

void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_putstr(char *str)
{
// * (*str) means memory address / pointer's address for storing value
// * or array of characters
    while (*str)
        write (1, str++, 1);
}
int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}
void ft_display_file(int argc, char **argv)
{
    int count;
    int fd;
    char buff;
    
    count = 0;
    if (argc < 2)
        write (1, "less argument\n", 15);
    else if (argc > 2)
        write (1, "too many argument\n", 18);
    else if (argc == 2)
    {
// return 0 if no match is found in individual character comparism
// on the command line console or after the starting of the program while
// the close bracket represent the number of entries for the loop to be executed
        if (ft_strcmp(argv[1], ".") == 0 || ft_strcmp(argv[1], "..") == 0 || ft_strcmp(argv[1], "./") == 0 || ft_strcmp(argv[1], "../") == 0)
        {
            ft_putstr(argv[1]);
            ft_putstr(": is a directory entries\n");
        }
// return -1 if the file does not exist or found
        else if ((fd = open(argv[1], O_RDONLY)) == -1)
        {
            ft_putstr(argv[1]);
            ft_putstr(": is not a file or directory\n");
        }
        else
        {
// *> here &buff means take char buff to a pointer's address void * (*)
// *> in read function to be read by the function as in void *ptr
// *> ptr = &buff;
            while ((count = read(fd, &buff, 1)))
            {
                ft_putchar(buff);
            }
            close(fd);
            ft_putchar('\n');
        }
    }
}
int main(int argc, char **argv)
{
    ft_display_file(argc, argv);
    return (0);
}
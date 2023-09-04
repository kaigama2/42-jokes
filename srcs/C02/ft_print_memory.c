#include "../../includes/piscine.h"

void ft_putchar(char c)
{
    write (1, &c, 1);
}
int ft_strlen(char *str)
{
    int i;
    i = 0;
// count the number of character in the array
    while (str[i])
        i++;
    return (i);
}
void ft_hex_content(int str, int nbytes)
{
    int test;
    test = str;
    if (test < 0)
    {
        write(1, "Negative sign found in string byte\n", 31);
        test *= -1;
    }
    else if (test >= nbytes)
    {
// using bit counted to call the function thereby making it as recursive
        test = test / nbytes;
        ft_hex_content(test, nbytes);
    }
// converting the bytes into char to be stored in str variable
    str = 48 + str % nbytes;
// print the bytes in char excluding char number and 
// null terminator for the char number using ft_putchar
    if (str > '9')
        ft_putchar('a' + str - '9' - 1);
// other wise print the bytes in char number
    else
        ft_putchar(str);
}

int ft_test_str(int c)
{
// here the byte is between the given range other wise return error
    if (!(c >= 32 && c <= 127))
        return (0);
    else
// this program return true
        return (1);
}
void ft_mem_printout(char *str, int i, int size)
{
    int x;
    x = 0;
// loop to keep count of both number of character or bytes to print
    while (x != 16)
    {
        if (str[i] && i < size)
        {
            if (ft_test_str(str[i]))
            {
                ft_putchar(str[i]);
            }
        }
        else
            ft_putchar('.');
        i++;
        x++;
    }
}
void ft_hexadecimal(char *str, int i, int size)
{
    int x;
    int j;
    x = 0;
    j = 0;
    while (x != 16)
    {
        while (j != 2)
        {
// call the function by checking number of character in the array and number of bits
            if (str[i] && i < size)
            {
                ft_hex_content(str[i], 16);
            }
            i++;
            j++;
            x++;
        }
// after any print out lets give a space for the next print out
        ft_putchar(' ');
// this is used to get out of the first loop
        j = 0;
    }
}

void ft_hex_address(void *addr)
{
    char hex[16];
// for accessing the string address we use
    long nbr;
// To avoid compiler warning for converting (void *) to long we 
// enclose long in bracket close to the variable addr
    nbr = (long)addr;
    int i;
    i = 0;
// note: there is no minus (-) or negative address in c so there's
// no need implementing a code to handle negative address
// Test and store address bit in the given hex array
    while (nbr > 0)
    {
        hex[i] = nbr % 16;
// puase to test for the presence of number in the address
        if (hex[i] < 10)
        hex[i] += '0';
        else
        hex[i] += 'a' - 10;
// count the number of address bit to be stored in the array
        nbr = nbr / 16;
        i++;
    }
// Terminating the counted address bit with '0' or 48 (an ascii code for '0')
    while (i < 16)
        hex[i++] = '0';
// print the stored bit one at a time from the end to the start
    while (i-- >= 0)
        ft_putchar(hex[i]);
}
void ft_print_memory(void *addr, int size)
{
// used for accessing the called string below
    char *str;
    int i;
    str = addr;
    i = 0;
// Note that each function will handle 16 characters on every call
// count the bits for calling each function
    while (i < size)
    {
        ft_hex_address(addr + i);
        ft_putchar(':');
        ft_putchar(' ');
        ft_hexadecimal(str, i, size);
        ft_mem_printout(str, i, size);
// place each bit on a newline for calling each function
        i += 16;
        ft_putchar('\n');
    }
}
int main()
{
    char str[] = "Bonjour les aminches...c  est fou.tout.ce qu on peut faire avec...print_memory....lol.lol. ";
    ft_print_memory(str, ft_strlen(str));
    return (0);
}
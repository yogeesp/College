/* Write a C program to check whether the Host machine is in Little Endian or Big Endian. 
Enter a number, print the content of each byte location and Convert the Endianness of
the same i.e. Little to Big Endian and vice versa. */

#include <stdio.h>
int main(void)
{
    int x = 0x11223344;
    char *c = (char *)&x;
    if (*c == 0x44)
    {
        printf("Machine is in little endian. \n");
    }
    else
    {
        printf("Machine is in big endian. \n");
    }

    int converted = 0;

    printf("Value Before Converting = 0x%x\n", x);

    converted |= ((0xff & x) << 24);
    converted |= (((0xff << 8) & x) << 8);
    converted |= (((0xff << 16) & x) >> 8);
    converted |= (((0xff << 24) & x) >> 24);

    printf("Value After Converting = 0x%x\n", converted);
    return 0;
}
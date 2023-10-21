#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer
 * @b: The buffer to print
 * @size: The number of bytes to print from the buffer
 */
void print_buffer(char *b, int size)
{
    int i, j;
    unsigned char *cast_b = (unsigned char *)b;

    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);
        for (j = 0; j < 10; j++)
        {
            if (i + j < size)
                printf("%02x", cast_b[i + j]);
            else
                printf("  ");
            if (j % 2)
                printf(" ");
        }
        for (j = 0; j < 10; j++)
        {
            if (i + j < size)
            {
                if (cast_b[i + j] >= 32 && cast_b[i + j] <= 126)
                    printf("%c", cast_b[i + j]);
                else
                    printf(".");
            }
        }
        printf("\n");
    }

    if (size <= 0)
        printf("\n");
}

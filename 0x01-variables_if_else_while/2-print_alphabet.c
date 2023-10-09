#include <stdio.h>
/**
 * main - Entry point of program
 *
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
    // Declare a character variable 'c' to store the current letter
    char c;

    // Start a loop to iterate from 'a' to 'z'
    for (c = 'a'; c <= 'z'; c++)
    {
        // Print the current letter using the putchar function
        putchar(c);
    }

    // Print a newline character to move to the next line
    putchar('\n');

    // Return 0 to indicate successful program execution
    return (0);
}


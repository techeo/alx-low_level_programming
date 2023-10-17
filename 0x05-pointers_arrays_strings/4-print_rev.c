#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: A pointer to the string to be printed.
 */
void print_rev(char *s) {
    if (s != NULL) {
        int length = 0;

        // Calculate the length of the string
        while (s[length] != '\0') {
            length++;
        }

        // Print the string in reverse
        for (int i = length - 1; i >= 0; i--) {
            _putchar(s[i]);
        }

        // Print a new line
        _putchar('\n');
    }
}

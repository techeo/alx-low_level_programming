#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: pointer to a pointer to char to be set.
 * @to: pointer to char to set the value from.
 */
void set_string(char **s, char *to)
{
    *s = to;
}

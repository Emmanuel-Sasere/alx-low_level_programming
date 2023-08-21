#include "main.h"
/**
 * _puts - This function print a string followed by a new line to stdout
 * @str: sting to print
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}

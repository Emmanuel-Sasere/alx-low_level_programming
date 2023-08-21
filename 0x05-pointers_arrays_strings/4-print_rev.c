#include "main.h"
/**
 * A function that prints a string, in reverse, followed by a new line.
 * @s: string
 * Return: 0 (Success)
 */
void print_rev(char *s)
{
	int longi = 0;
	int y;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (y = longi; y > 0; y--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

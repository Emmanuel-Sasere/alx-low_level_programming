#include "main.h"
/**
 *print_rev -  prints a string, in reverse, followed by a new line.
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
		putchar(*s);
		s--;
	}

	putchar('\n');
}

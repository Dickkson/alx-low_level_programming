#include "main.h"

/**
 * puts - a function that prints a string
 * folllowed by a new line to stdout
 * @str: an input string
 * Return: nothing
*/
void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}

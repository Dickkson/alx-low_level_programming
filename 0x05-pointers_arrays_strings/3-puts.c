#include "main.h"

/**
 * puts - a function that prints a string
 * folllowed by a new line to stdout
 * @str: an input string
 * Return: nothing
*/
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

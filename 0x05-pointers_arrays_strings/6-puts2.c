#include "main.h"

/**
 * puts2 -  a function that prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: an input string
 * Return: nothing
*/
void puts2(char *str)
{
	int st;

	while (str[st] != '\0')
	{
		if (st % 2 == 0)
			_putchar(str[st];
		st++;
	}
	_putchar('\n');
}

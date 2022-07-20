#include "main.h"

/**
 * _puts_recursion -> a function that prints string recursively
 * @s: string parametre
 */
void _puts_recursion(char *s)
{
	s = "lpa\0";
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}

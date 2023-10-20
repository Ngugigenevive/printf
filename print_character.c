#include "main.h"

/**
 * print_character - prints character
 * @val: arguments of the function
 * Return: 1.
 */
int print_character(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}

#include "main.h"

/**
 * _putchar - writes char c to stdout
 * @c: character to print
 * Return: On success 1.
 * return -1 on error, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include <stdio.h>

/**
 * print_line - prints line
 *
 * @n: param
 * Return: No return.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}

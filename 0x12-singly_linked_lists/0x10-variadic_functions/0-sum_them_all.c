#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - retuns the sum of all the argument
 * @n: constant int to the arguments
 *
 * Return: the sum of all the argumetns
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, total = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}
	va_end(args);
	return (total);
}

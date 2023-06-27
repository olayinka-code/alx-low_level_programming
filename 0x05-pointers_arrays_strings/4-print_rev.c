#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - print output in reverrse order
 * @s: stored string
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

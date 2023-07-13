#include "main.h"

/**
 * _puts - prints a string to stdout
 * @s: the string to print
 *
 * Return: void
 */
void _puts(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        _putchar(s[i]);
        i++;
    }
}

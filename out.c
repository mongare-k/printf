#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _printf - Produes output according to a format
 * @format: Character string
 *
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	print_t p[] = {

		{"c", print_c},
		{"s", print_s},
		{"%", print_%},
		{NULL, NULL}
	};

	for (i = 0; p[ui].t != NULL; i++)
	{
		if (*p[i].t) == *format)
		{
			break;
		}
	}

	return (p[i].f);
}

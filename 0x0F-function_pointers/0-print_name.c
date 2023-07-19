#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: The name to print
 * @f: Pointer to function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

#include <stdio.h>
#include "main.h"

/**
 * main - prints it's name
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Returns: Always Zero
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}

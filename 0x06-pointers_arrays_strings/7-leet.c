#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * puts_half - a function that prints half of a string
 * @string: a string
 * Return: half of input
 */

void puts_half(char *string)
{
	int a, b, i = 0;

	for (a = 0; string[a] != '\0'; a++)
		i++;
	b = (i / 2);
	if ((i % 2) == 1)
		b = ((i + 1) / 2);
	for (a = b; string[a] != '\0'; a++)
		putchar(string[a]);
	putchar('\n');
}

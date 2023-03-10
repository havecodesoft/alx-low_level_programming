#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - shows mults of two arg numbers
 * @argCount: argument count
 * @argVector: argument vector
 * Return: always 0
 */

int main(int argCount, char *argVector[])
{
	int num1 = 0, num2 = 0;

	if (argCount == 3)
	{
		num1 = atoi(argVector[1]);
		num2 = atoi(argVector[1]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

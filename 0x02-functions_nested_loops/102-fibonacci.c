#include <stdio.h>
/**
 * main - prints 52 fibonacci nos
 * Return: null
 */
int main(void)
{
	int a = 0;
	long b = 1, c = 2;
	while (a < 50)
	{
		if (a == 0)
			printf("%ld", b);
		else if (a == 1)
			printf(", %ld", c);
		else
		{
			c = c + b;
			b = c - b;
			printf(", %ld", k);
		}
		++a;
	}
	printf("\n");
	return (0);
}

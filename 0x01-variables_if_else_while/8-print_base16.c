#include <stdio.h>

/**
 * main - prints the numbers in base 16
 * Return: Always 0
*/
int main(void)
{
	int n;
	char la;

	for (n = 0; n < 10; n++)
		putchar(n + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);

	putchar ('\n');

	return (0);
}

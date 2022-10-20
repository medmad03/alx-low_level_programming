#include "main.h"
/**
* print_last_digit - function
* @n: the number
*
* Description: prints last digit of a number.
* Return: Always 0 (success)
*/
int print_last_digit(int n)
{
	int r = n % 10;

	if (r < 0)
	{
		r = (r * -1);
	}
	_putchar(r + '0');

	return (0);
}

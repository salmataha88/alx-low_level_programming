#include "main.h"
/**
 *  * print_last_digit - prints the last digit of a number
 *   * @n: the int to extract the last digit from
 *    * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int res = 0;
	res = n % 10;

	if (res < 0)
		res = -res;
	_putchar('0' + res);
	return (res);
}

#include "holberton.h"

/**
 * f_digit - Prints an integer
 * @arglist: the list of arguments the function _printf is receiving
 * Return: Number of digits printed
 */
int f_digit(va_list arglist)
{
	int  printNum = 0, i = 0, c = 0, dig = 0;
	unsigned int num;
	dig = va_arg(arglist, int);
	if (dig <= INT_MAX && dig >= INT_MIN)
	{
		if (dig < 0)
		{
			dig *= -1;
			_putchar('-');
			printNum += 1;
		}
		num = dig;
		for (c = 0; (num / 10) > 0; c++)
		{
			num = num / 10;
		}
		num = dig;
		while (c != 0)
		{
			for (i = 0; i < c; i++)
			{
				num = num / 10;
			}
			num = num % 10;
			_putchar(num + '0');
			printNum++;
			c--;
			num = dig;
		}
		_putchar((num % 10) + '0');
		printNum++;
	}
	else
	{
		return (-1);
	}
	return (printNum);
}

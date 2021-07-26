#include "holberton.h"

/**
 * f_u_int - function that convert a number into unsigned integer
 * @arglist: the list of arguments the function from _printf
 * Return: the number of character to be printed
 */
int f_u_int(va_list arglist)
{
	unsigned int m, number;
	int i, k, printNum = 0;
	number = va_arg(arglist, unsigned int);
	if (number == 0)
	{
		_putchar(number + '0');
		printNum++;
	}
	else if (number > UINT_MAX)
	{
		m = number - UINT_MAX - 1;
		_putchar(m + '0');
		printNum++;
	}
	else if (number <= UINT_MAX)
	{
		m = number;
		for (k = 0; (m / 10) > 0; k++)
		{
			m /= 10;
		}
		m = number;
		while (k != 0)
		{
			for (i = 0; i < k; i++)
			{
				m /= 10;
			}
			m %= 10;
			_putchar(m + '0');
			printNum++;
			k--;
			m = number;
																							}
		_putchar(m % 10 + '0'), printNum++;
	}
	else
	{
		m = (UINT_MAX + 1) - number;
		_putchar(m + '0'), printNum++;
	}
	return (printNum);
}
/**
 * f_bin_conv - Convert a number into binary number
 * @arglist: the list of arguments the function from _printf
 * Return: the number of character to be printed
 */
int f_bin_conv(va_list arglist)
{
	int printNum = 0, num = 0, base = 2, flag = 0;
	num = va_arg(arglist, unsigned int);
	printNum = bin_oct_hex_conv(num, base, flag);
	return (printNum);
}

/**
 * f_oct_conv - Convert a number into octal number
 * @arglist: the list of arguments the function from _printf
 * Return: the number of character to be printed
 */
int f_oct_conv(va_list arglist)
{
	int printNum = 0, num = 0, base = 8, flag = 0;
	num = va_arg(arglist, unsigned int);
	printNum = bin_oct_hex_conv(num, base, flag);
	return (printNum);
}

/**
 * f_low_hex_conv - Convert a number into hexadecimal
 * lowercase
 * @arglist: the list of arguments the function from _printf
 * Return: the number of character to be printed
 */
int f_low_hex_conv(va_list arglist)
{
	int printNum = 0, num = 0, base = 16, flag = 0;
	num = va_arg(arglist, unsigned int);
	printNum = bin_oct_hex_conv(num, base, flag);
	return (printNum);
}

/**
 * f_up_hex_conv - Convert a number into hexadecimal Uppercase number
 * @arglist: the list of arguments the function from _printf
 * Return: the number of character to be printed
 */
int f_up_hex_conv(va_list arglist)
{
	int printNum = 0, num = 0, base = 16, flag = 1;
	num = va_arg(arglist, unsigned int);
	printNum = bin_oct_hex_conv(num, base, flag);
	return (printNum);
}

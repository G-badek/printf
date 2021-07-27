#include "holberton.h"
/**
 * f_rev - function that reverses a string
 * @arglist: the list of arguments the function from _printf
 * Return: the number of character to be printed
 */
int f_rev(va_list arglist)
{
	char *str;
	int printNum = 0, index, j = 0;
	str = va_arg(arglist, char *);
	for (index = 0; str[index] != 0; index++)
	{
		printNum++;
	}
	for (j = index - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}
	return (printNum);
}
/**
 * f_strUp - Prints a string, when out of range print \x0A
 * @arglist: the list of arguments the function from _printf
 * Return: the number of character to be printed
 */
int f_strUp(va_list arglist)
{
	char *str1;
	int index, printNum = 0;
	str1 = va_arg(arglist, char *);
	for (index = 0; str1[index] != '\0'; index++)
	{
		if ((str1[index] > 0 && str1[index] < 32) || str1[index] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_putchar('0');
			_putchar('A');
			printNum += 4;
		}
		else
		{
			_putchar(str1[index]);
			printNum++;
		}
	}
	return (printNum);
}

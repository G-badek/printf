#include "holberton.h"
/**
 * f_percent - print the sing percent
 * @arglist: the list of arguments the function from _printf
 * Return: the number of character to be printed
 */
int f_percent(__attribute__((unused)) va_list arglist)
{
	_putchar('%');
	return (1);
}
/**
 * f_char - print a char, or nothing if it is not
 * @arglist: the list of arguments the function from _printf
 * Return: the number of character to be printed
 */
int f_char(va_list arglist)
{
	char c;
	c = (va_arg(arglist, int));
	_putchar(c);
	return (1);
}
/**
 * f_str - print a string
 * @arglist: the list of arguments the function from _printf
 * Return: the number of character to be printed
 */
int f_str(va_list arglist)
{
	int index;
	char *ptr;
	ptr = (va_arg(arglist, char *));
	if (ptr == 0)
    {
		ptr = "(null)";
    }
	for (index = 0; ptr[index] != 0; index++)
    {
		_putchar(ptr[index]);
    }
	return (index);
}

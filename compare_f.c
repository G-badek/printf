#include "holberton.h"

/**
 * compare_f - compare format with function format
 * @format: character string
 * @arglist: the list of arguments the function from _printf
 * Return: the number of character to be printed
 */
int compare_f(const char *format, va_list arglist, struct_fmt st_fmt_arr[])
{
	int printNum = 0, index = 0, j, k = 0, num = 0;
	for (index = 0; format && format[index] != 0; index++)
	{
		if (format[index] != '%')
		{
			_putchar(format[index]);
			printNum += 1;
		}
		else
		{
			for (j = 0; st_fmt_arr[j].format; j++)
			{
				if (format[index + 1] == st_fmt_arr[j].format[k])
				{
					num = st_fmt_arr[j].f(arglist);
					printNum += num;
					index++;
					break;
				}
			}
			if (st_fmt_arr[j].format == NULL && format[index + 1] != ' ')
			{
				if (format[index + 1] != 0)
				{
					_putchar(format[index]);
					_putchar(format[index + 1]);
					printNum += 2;
					index++;
				}
				else
				{
					return (-1);
				}
			}
		}
	}
	if (format == NULL)
	{
		return (-1);
	}
	return (printNum);
}

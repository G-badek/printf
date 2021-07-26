#include "holberton.h"

/**
 * f_rot13 - encodes a string using rot13.
 * @arglist: the list of arguments the function from _printf
 * Return: the number of character to be printed
 */
int f_rot13(va_list arglist)
{
	int i = 0, j = 0, printNum = 0;
	char arr1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s;
	s = va_arg(arglist, char *);
	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; arr1[j] != 0; j++)
		{
			if (s[i] == arr1[j])
			{
				printNum++;
				_putchar(arr2[j]);
				break;
			}
			else if (arr1[j + 1] == 0)
			{
				_putchar(s[i]);
				printNum++;
			}
		}
	}
	return (printNum);
}

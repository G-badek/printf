#include "holberton.h"
/**
 * bin_oct_hex_conv - convert a number into binary, octal or hexadecimal
 * @num: Its the number given to convert
 * @base: is the base which the number will be divided with; binary 2; octal 8; hexadecima 16.
 *Return: The number of characteres printed
 */	
int bin_oct_hex_conv(unsigned int num, int base, int flag)
{
	char upcase_hex[] = "0123456789ABCDEF";
	char lowcase_hex[] = "0123456789abcdef";
	char array[2021];
	char *ptr;
	int i = 2020, j = 0, printNum;
    printNum = i;
	ptr = &array[2020];
	*ptr = '\0';
	do {
		if (flag != 0)
        {
			*--ptr = upcase_hex[num % base];
        }
		else
        {
			*--ptr = lowcase_hex[num % base];
        }
		num = num / base;
		i--;
	} while (num != 0);
	for (j = i; array[j] != 0; j++)
	{
		_putchar(array[j]);
	}
	return(printNum - i);
}

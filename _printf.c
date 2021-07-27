#include "holberton.h"

/**
 * _printf - prints any format of input
 * @format: type of character in string format
 * @...: list of variadic arguments
 * Return: number of characters that are printed
 */
int _printf(const char *format, ...)
{
struct_fmt st_fmt_arr[] = {
{"c", f_char},
{"s", f_str},
{"d", f_digit},
{"i", f_digit},
{"%", f_percent},
{"b", f_bin_conv},
{"u", f_u_int},
{"o", f_oct_conv},
{"x", f_low_hex_conv},
{"X", f_up_hex_conv},
{"S", f_strUp},
{"r", f_rev},
{"R", f_rot13},
{NULL, NULL}
};
va_list arglist;
int printNum;
printNum = 0;
va_start(arglist, format);
printNum = compare_f(format, arglist, st_fmt_arr);
va_end(arglist);
return (printNum);
}

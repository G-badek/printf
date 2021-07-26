#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
/**
 * struct format - the struct by name stfmt
 * @format: index by function
 * @f: pointer to function - funtion print
 */
typedef struct struct_fmt
{
	char *format;
	int (*f)(va_list list);
} struct_fmt;
int _printf(const char *format, ...);
int _putchar(char c);
int f_str(va_list);
int f_char(va_list);
int f_percent(va_list);
int compare_f(const char *, va_list, st_fmt st_format[]);
int f_digit(va_list);
int f_bin_conv(va_list);
int f_oct_conv(va_list);
int f_up_hex_conv(va_list);
int f_low_hex_conv(va_list);
int bin_oct_hex_conv(unsigned int, int, int);
int f_u_int(va_list list);
int f_strUp(va_list list);
int f_rev(va_list list);
int f_rot13(va_list);
#endif /* HOLBERTON_H */

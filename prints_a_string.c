#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
* _printf - produces output according to a format
* @format: character string containing directives
* Return: the number of characters printed (excluding the null byte)
*/
int _printf(const char *format, ...)
{
int printed_chars = 0;
va_list args;

va_start(args, format);

if (format == NULL)
return (-1);

while (*format != '\0')
{
if (*format != '%')
{
printed_chars += _putchar(*format);
format++;
continue;
}

format++;

printed_chars += handle_conversion_specifier(*format, args);

format++;
}

va_end(args);

return (printed_chars);
}

/**
* handle_conversion_specifier - handles conversion specifier
* @specifier: the conversion specifier character
* @args: va_list containing the arguments
* Return: the number of characters printed
*/
int handle_conversion_specifier(char specifier, va_list args)
{
switch (specifier)
{
case 'c':
return (_putchar(va_arg(args, int)));
case 's':
return (_print_str(va_arg(args, char *)));
case '%':
return (_putchar('%'));
default:
return (_putchar('%') + _putchar(specifier));
}
}

/**
* _putchar - writes a character to stdout
* @c: the character to print
* Return: On success, 1. On error, -1 is returned.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
* _print_str - prints a string
* @str: the string to print
* Return: the number of characters printed
*/
int _print_str(char *str)
{
int len = 0;

if (str == NULL)
str = "(null)";

while (str[len] != '\0')
{
_putchar(str[len]);
len++;
}

return (len);
}

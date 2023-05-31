#ifndef MAIN_H
#define  MAIN_H
#include <stdarg.h>


int _printf(const char *format, ...);
int handle_conversion_specifier(char specifier, va_list args);
int _print_str(char *str);
int _putchar(char c);
int _printf(const char *format, ...);
int _print_integer(int n);
int count_digits(int n);
int _print_binary(unsigned int n);
int _print_octal(unsigned int n);
int _print_hexadecimal(unsigned int n, int uppercase);
void print_integer(int value, char conversion_specifier);
void print_unsigned_integer_in_binary(unsigned int value);
void print_unsigned_integer(unsigned int value, char conversion_specifier);
void print_string_with_non_printable_characters(char *str);
void print_pointer(void *pointer);
void print_flag_characters(char *format, char *buffer);
int handle_flag_characters(char *format, va_list args);
int handle_length_modifiers(char *format, va_list args);
int handle_field_width(char *format, va_list args);
int handle_precision(char *format, va_list args);
int handle_0_flag(char *format, va_list args);
int handle_dash_flag(char *format, va_list args);
int handle_custom_conversion_specifier_r(char *format, va_list args);
int handle_custom_conversion_specifier_R(char *format, va_list args);

#endif

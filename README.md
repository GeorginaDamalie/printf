Synopsis
This is a simple implementation of the printf function, which is used to
format and print data. It provides a basic functionality to handle different
format specifiers and output the formatted data to the standard output stream.

Description

The _printf function is a simplified implementation of the printf function
in C. It allows you to print formatted output to the standard output stream.
This function writes its output to stdout, which is the standard output stream.
The function returns the count of characters printed when it is successful.

Custom Conversion Specifiers
The following custom conversion specifiers are supported:

S: Prints the string. Non-printable characters
(0 < ASCII value < 32 or >= 127)
are printed this way: \x, followed by the ASCII code value in hexadecimal
(upper case - always 2 characters).
p: Prints the pointer value in hexadecimal.
Non-Custom Conversion Specifiers
The following non-custom conversion specifiers are supported:

d: Prints the decimal integer value.
i: Prints the signed integer value.
u: Prints the unsigned integer value.
o: Prints the octal integer value.
x: Prints the hexadecimal integer value.
X: Prints the hexadecimal integer value in uppercase.
Flag Characters
The following flag characters are supported:

+: Prints a sign (+ or -) for positive numbers.
space: Prints a space before positive numbers.
#: Prints the leading zeroes for octal and hexadecimal values.
Length Modifiers
The following length modifiers are supported:

l: Prints a long integer value.
h: Prints a short integer value.
Field Width
The field width specifies the minimum number of
characters to be printed. If the value is less than the
length of the output, the output is padded with spaces.

Precision
The precision specifies the maximum number of characters
to be printed.
If the value is less than the length of the output, the output is truncated.

0 Flag Character
The 0 flag character specifies that the
output should be padded with zeros instead of spaces.

- Flag Character
The - flag character specifies that the output
should be left-aligned instead of right-aligned.

Custom Conversion Specifiers
The following custom conversion specifiers are supported:

r: Prints the reversed string.
R: Prints the rot13'ed string.


Usage
All your files will be compiled on Ubuntu 20.04 LTS using gcc,
    using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
The prototypes of all your functions should be included
in your header file called main.h.

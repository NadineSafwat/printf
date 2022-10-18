#include "main.h"

/**
 * _printf - produces output according to a format and print it
 * @format: input
 *
 * Return: number of printed characters
 */

int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t fun_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	printed_chars = handler(format, fun_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}

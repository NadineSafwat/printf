#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char *str = "nadine";
	int len;
	int len2;
	unsigned int ui;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;

	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("%s\n", "school");
	printf("%s\n", "school");
	_printf("%s\n", str);
	printf("%s\n", str);
	_printf("the character is %c\n", 'm');
	printf("the charecter is %c\n", 'm');
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");

	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	_printf("%b\n", 98);

	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	return (0);
}

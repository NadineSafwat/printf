#include "main.h"
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _printf - function prints like printf
 * @format: a pointer to string
 * Return: int
 */

int _printf(const char *format, ...);
char* strrev(char *str);
char* _itoa(int value, char* strout, int base);

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char buff[100] = {0}, tmp[20];
	char *str_arg;

	va_start(ap, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i]) {
				case 'c':
					{
						buff[j] = (char) va_arg(ap, int);
						j++;
						break;
					}
				case 'd': {
					 	 _itoa(va_arg(ap, int), tmp, 10);
					 	 strcpy(&buff[j], tmp);
					 	 j += strlen(tmp);
						  break;
				 	 }
				case 's':
				 	 {
					 	 str_arg = va_arg(ap, char*);
					 	 strcpy(&buff[j], str_arg);
					  	j+= strlen(str_arg);
					  	break;
				  	}
			}
		}
		else
		{
			buff[j] = format[i];
			j++;
		}
		i++;
	}
	fwrite(buff, j, 1, stdout);
	va_end(ap);
	return (j);
}



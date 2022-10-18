#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * _printf - function prints like printf
 * @format: a pointer to string
 * Return: int
 */

/**
 * _strrev - reverses the string
 * @str: a pointer to char
 * Return: char reversed
 */

char* _strrev(char *str)
{
	int i;
	int len = 0; //index of the string
	char c;

	if (!str)
		return NULL;
	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0;i < (len /2); i++)
	{
		c = str[i];
		str[i] = str[len - i -1];
		str[len - i - 1] = c;
	}
	return str;
}

/**
 * _itoa - converts integaer to a string
 * @i: the integer
 * @strout: to save the string
 * @base: the base of ascii code
 * Return: char
 */

char* _itoa(int i, char* strout, int base)
{
	char *str = strout;
	int digit, sign = 0;

	if (i < 0)
	{
		sign = 1;
		i *= -1;
	}

	while (i)
	{
		digit = i % base;
		*str = (digit > 9) ? ("A" + digit - 10) : ('0' + digit);
		i = i / base;
		str++;
	}
	if (sign)
	{
		*str++ = '-';
	}
	*str = '\0';
	_strrev(strout);
	return (strout);
}

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



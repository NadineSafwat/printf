#include "main.h"

/**
 * _itoa - converts integaer to a string
 * @i: the integer
 * @strout: to save the string
 * @base: the base of ascii code
 * Return: char
 */

char* strrev(char *str);
char* _itoa(int value, char* strout, int base);

char* _itoa(int value, char* strout, int base)
{
	int n = abs(value);
	int i = 0;

	if (base || base > 32)
                return (strout);
	while (n)
	{
		int r = n % base;
		if (r >= 10)
		{
			strout[i++] = 65 + (r - 10);
		}
		else
		{
		strout[i++] = 48 + r;
		}

	n = n / base;
	}
	if (i == 0)
	{
		strout[i++] = '0';
	}
	if (value < 0 && base == 10)
	{
		strout[i++] = '-';
	}
	strout[i] = '\0';
		
        strrev(strout);
        return (strout);
}

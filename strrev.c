#include "main.h"

/**
 * strrev - reverses the string
 * @str: a pointer to char
 * Return: char reversed
 */

char* strrev(char *str)
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


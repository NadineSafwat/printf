#include "main.h"

/**
 * _write - writes the character c to stdout
 * @c: character to be printed
 *
 * Return: 1 if success and -1 if error
 */

int _write(char c)
{
	return (write(1, &c, 1));
}

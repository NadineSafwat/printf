#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct convert - stores pointers to symbols
 *
 * @sym: the specifier
 * @f: pointer to a printer functions
 */

struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

int _printf(const char *format, ...);
int handler(const char *format, conver_t fun_list[], va_list arg_list);
int _write(char);
int print_char(va_list);
int print_string(va_list);
int print_integer(va_list);
int print_number(va_list args);
int print_percent(__attribute__((unused))va_list list);
int print_binary(va_list arglst);
char *rev_string(char *s);
void write_base(char *str);
unsigned int base_len(unsigned int num, int base);
char *_memcpy(char *dest, char *src, unsigned int n);
int unsigned_integer(va_list list);
int print_unsgined_number(unsigned int n);

#endif

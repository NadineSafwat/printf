#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
char *_strrev(char *str);
char *_itoa(int i, char *strout, int base);

#endif

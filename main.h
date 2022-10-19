#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...);
char* strrev(char *str);
char* _itoa(int value, char* strout, int base);

#endif


#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *s, ...);
int _check(va_list args, char c);
int _printc(int c);
int _prints(char *c);
void _printd(int c, int *count);
void _printu(unsigned int c, int *count);
void _printx(unsigned long c, char x, int *count);
void _printb(unsigned int c, int *count);
void _printo(unsigned long c, int *count);
int	_printss(char *c);
void _printr(char *str, int *count);
void	put_str(char *c);
int _print_rot_13(char *str);

#endif

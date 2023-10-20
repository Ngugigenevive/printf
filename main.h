#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - matches conversion specifiers
 * 
 * @id: specifier pointer
 * @f: function pointer to conversion specifier
 **/
typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int print_pointer(va_list val);
int print_hex_aux(unsigned long int num);
int print_HEX_auxi(unsigned int num);
int print_exclusive_string(va_list val);
int print_HEXADEC(va_list val);
int print_hexadecimal(va_list val);
int print_octal(va_list val);
int print_unsigned(va_list args);
int print_binary(va_list val);
int print_sreverse(va_list args);
int print_rot13(va_list args);
int print_integer(va_list args);
int print_decimal(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int print_percentage(void);
int print_character(va_list val);
int print_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif

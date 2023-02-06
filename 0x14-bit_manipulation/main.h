#ifndef STDIO
#define STDIO
#include <stdio.h>
#endif /* STDIO */

#ifndef STDLIB
#define STDLIB
#include <stdlib.h>
#endif /* STDLIB */

#ifndef _POW
#define _POW
unsigned int _pow(unsigned int n);
#endif /* _POW */

#ifndef BINARY_TO_UINT
#define BINARY_TO_UINT
unsigned int binary_to_uint(const char *b);
#endif /* BINARY_TO_UINT */

#ifndef _PUTCHAR
#define _PUTCHAR
void _putchar(char c);
#endif /* _PUTCHAR */

#ifndef BIT_INDEX
#define BIT_INDEX
unsigned int bit_index(unsigned long int n);
#endif /* BIT_INDEX */

#ifndef _PRINT_BITS
#define _PRINT_BITS
void _print_bits(int i, int m, unsigned long int n);
#endif /* _PRINT_BITS */

#ifndef PRINT_BINARY
#define PRINT_BINARY
void print_binary(unsigned long int n);
#endif /* PRINT_BINARY */

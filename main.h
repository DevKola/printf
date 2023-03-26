#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(X)
#define BUFF_SIZE 1024

/* FALGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZE */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The functiion associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - struct op
 *
 * @fmt: The firmat.
 * @fm_t: The function associated.
 */
typedef struct fmt ftm_t;

int _printf(cont char *format, ...);

#ifndef FILE_H
#define FILE_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <limits.h>
#include <signal.h>
#include <fcntl.h>

/**
 * Struct variables - Struct to save arguments
 * @buffer: Argument
 * @array_tokens: Array of tokens
 *
 * Description: Is a struct for save arguments send by users.
 */
typedef struct variables
{
	char *buffer;
	char **array_tokens;
} vars_t;

char **tokenizer(char *buffer, char *delimiter);

int _putchar(char c);
int _puts(char *s);

#endif

#include "file.h"

/**
 * main - Main function
 * @argc: Number of arguments
 * @argv: List of arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	vars_t vars = {NULL, NULL};
	size_t len_buffer = 0;

	(void)argc;
	(void)argv;

	_puts("$ ");

	while ((getline(&(vars.buffer), &len_buffer, stdin)) != -1)
	{
		vars.array_tokens = tokenizer(vars.buffer, " \n");
		if (vars.array_tokens == NULL)
		{
			_puts("$ ");
			continue;
		}


		if (check_for_builtins(&vars) == NULL)
		{
			_puts("No encontrado ");
			_puts(vars.array_tokens[0]);
			_putchar('\n');
		}
		_puts("$ ");
	}

	return (0);
}

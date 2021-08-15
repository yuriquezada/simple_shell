#include <stdio.h>
#include "file.h"

void (*check_for_builtins(vars_t *vars))(vars_t *vars)
{
	unsigned int i;
	builtins_t check[] = {
		{"1", file1},
		{"2", file2},
		{NULL, NULL}
	};
	
	for (i = 0; check[i].f != NULL; i++)
	{
		if (strcmp(vars->array_tokens[0], check[i].name) == 0)
			break;
	}
	if (check[i].f !=NULL)
		check[i].f(vars);
	return (check[i].f);
}

void file1(vars_t *vars)
{
	char *str = "Hola mundo";
	char *new_str;
	int counter = 0;
	int z = 0;

	while (str[counter])
		counter++;
	new_str = malloc(sizeof(char) * counter + 1);

	while (z < counter)
	{
		new_str[z] = str[z];
		z++;
	}
}

void file2(vars_t *vars)
{
	
}

#include "file.h"

char **tokenizer(char *buffer, char *delimiter)
{
	char **tokens = NULL;
	size_t i = 0;
	unsigned int mcount = 10;

	if (buffer == NULL)
		return (NULL);
	tokens = malloc(sizeof(char *) * mcount);
	if (tokens == NULL)
	{
		return (NULL);
        }
	while ((tokens[i] = strtok(buffer, delimiter)) != NULL)
	{
		i++;
		if (i == mcount)
                {
			tokens = realloc(tokens, mcount);
			if (tokens == NULL)
                        {
				return (NULL);
			}
		}
	}
}

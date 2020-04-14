#include "simple_shell.h"
/**
 * _malloc - mallocs memory of size bytes, prints error message on error
 * @chars: number of bytes to malloc
 * Return: pointer to malloced memory or NULL
 */
char *_malloc(int chars)
{
	char *string;
	int i;

	string = malloc(chars);
	if (string == NULL)
	{
		_perror("No Memory\n");
		exit(1);
	}
	for (i = 0; i < chars; i++)
		string[i] = '\0';
	return (string);
}
/**
 * _free - free and set to null the pointer
 * @ptr: pointer
 */
void _free(char **ptr)
{
	free(*ptr);
	*ptr = NULL;
}

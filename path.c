#include "simple_shell.h"
/**
 * _getenv - Get the enviroment variable.
 * @var: the command that the user put.
 * Return: the enviroment variable.
 */
char *_getenv(char *var)
{
	char *token;
	int i;

	i = 0;
	while (environ[i])
	{
		if (_strstr(environ[i], var) != 0)
		{
			token = _strstr(environ[i], "=");
			if (token[0] == '=')
				return (token);
		}
		i++;
	}
	return (0);
}
/**
 * path - get the command line and give the adrres  of the command.
 * @command_line: the command that the user put.
 * Return: addres
 */
char *path(char *command_line)
{
	struct stat st;
	char *pa1, *token, *command;
	char *path, *addres;
	int i;

	pa1 = _strdup(_getenv("PATH"));
	command = str_concat("/", command_line);
	addres = _strdup(command_line);
	token = strtok(pa1, ":");
	for (i = 0; token != NULL; i++)
	{
		path = str_concat(token, command);
		if (stat(path, &st) == 0)
		{
			_free(&addres);
			addres = _strdup(path);
		}
		token = strtok(NULL, ":");
		_free(&path);
	}
	_free(&pa1);
	_free(&command);
	return (addres);
}

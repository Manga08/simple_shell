#include "simple_shell.h"
/**
 * _atoi - convert a string to an integer
 * @s: the string to be transforming.
 * Return: n * b.
 */
int _atoi(char *s)
{
	int x, y, a, b;
	unsigned int n;

	if (s == NULL)
		return (0);
	x = 0;
	y = 1;
	n = 0;
	b = 1;

	while ((s[x] != '\0' && s[x] < '0') || (s[x] > '9' && s[x] != '\0'))
	{
		if (s[x] < 48 && s[x] > 57 && s[y] >= 48 && s[y] <= 57)
		{
			n = (s[y] - '0');
		}
		y = ++x;
	}
	while (s[x] >= 48 && s[x] <= 57)
	{
		n = (n * 10) + s[x] - '0';
		x++;
	}
	for (a = 0; a < x; a++)
	{
		if (s[a] == '-')
		{
			b *= -1;
		}
	}
	return (n * b);
}
/**
 * _strcmp - compare two strings.
 *@s1: the firts string.
 *@s2: the second string.
 *Return: n.
 */
int _strcmp(char *s1, char *s2)
{
	int i, n;

	i = 0;

	if (!s1 || !s2)
		return (-1);

	while (s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			n = 0;
		}
		else
		{
			n = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (n);
}
/**
 *_strlen - calculate the length of a string.
 *@s: the string.
 *Return: the ct
 */
int _strlen(char *s)
{
	int ct;

	for (ct = 0; s && s[ct] != '\0'; ct++)
	{
	}
	return (ct);
}

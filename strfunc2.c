#include "simple_shell.h"
/**
 * _strchr - locate character in string.
 *@s: the sting.
 *@c: the char.
 *Return: s.
 */
char *_strchr(char *s, char c)
{
	unsigned int ct;

	for (ct = 0; *s != '\0'; ct++)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	else
		return (NULL);
}
/**
 * print_number - prints a integer with purchar.
 *@n: the integer.
 */
void print_number(int n)
{
	unsigned int ct;

	if (n < 0)
	{
		_putchar('-');
		ct = -n;
	}
	else
		ct = n;

	if (ct / 10)
		print_number(ct / 10);

	_putchar(ct % 10 + '0');
}
/**
 * _strstr - locate a substring.
 *@haystack: the haystack.
 *@needle: the needle.
 *Return: c.
 */
char *_strstr(char *haystack, char *needle)
{
	char *c, *ch;

	while (*haystack != '\0')
	{
		c = haystack;
		ch = needle;

		while (*ch == *haystack && *ch != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			ch++;
		}
		if (*ch == '\0')
			return (c);
		haystack = c + 1;
	}
	return (NULL);
}
/**
 * str_concat - print a reverse string.
 *@s1: the firts string.
 *@s2: the second string.
 *Return: the new string
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, ct1, ct2;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + size1) != '\0')
		size1++;
	while (*(s2 + size2) != '\0')
		size2++;

	concat = malloc(size1 + size2 + 1);

	if (concat == 0)
		return (0);

	for (ct1 = 0; ct1 < size1; ct1++)
		*(concat + ct1) = *(s1 + ct1);
	for (ct1 = 0, ct2 = size1; ct1 < size2; ct2++, ct1++)
		*(concat + ct2) = *(s2 + ct1);
	*(concat + ct2) = '\0';
	return (concat);
}
/**
 * _strdup - Prints the array reverse
 * @str: string
 * Return: dest.
 */
char *_strdup(char *str)
{
	int i, size;
	char *dest;

	if (str == 0)
	{
		return (NULL);
	}
	for (size = 0; str[size] != 0; size++)
	{}
	dest = malloc((size + 1) * sizeof(char));
	for (i = 0; i < size; i++)
		dest[i] = str[i];
	dest[i] = '\0';
	return (dest);
}

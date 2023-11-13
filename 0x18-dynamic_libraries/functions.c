#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: character to be checked
 * Return: 1 if it is, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
#include "main.h"
/**
 * _isalpha - checks whether a chracter is alpha
 * @c: chracter to be checkd
 * Return: 1 if it is lowercase, uppercase 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
#include "main.h"
/**
 * _abs - converts a number to the absilute value
 * @n: number to be converted
 * Return: converted number
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
#include "main.h"
/**
 * _isupper - check if the argument's an uppercase letter
 * @c: argument to be checked
 * Return: 1 if it is, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
#include "main.h"
/**
 * _isdigit - check if given argument's a digit
 * @c: given argument
 * Return:  if it is, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
#include "main.h"
/**
 * _strlen - get the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0, iterator;

	for (iterator = 0; s[iterator] != '\0'; iterator++)
	{
		length++;
	}
	return (length);
}
#include "main.h"
/**
 * _puts - print a string then a newline
 * @str: string
 * no return
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
#include "main.h"
/**
 * _strcpy - copy a string
 * @src: address o source string
 * @dest: destination address
 * Return: pointer to new address
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
#include "main.h"
/**
 * _atoi - convert an ascii char vto an int
 * @s: string to convert
 * Return: converted string or 0 if no numbers
 */
int _atoi(char *s)
{
	int num = 0, it = 0, sign = 1;

	while (s[it])
	{
		if (s[it] == '-')
			sign *= -1;
		if (_isdigit(s[it]))
		{
			if  (sign == -1)
				num = (num * 10) - (s[it] - 48);
			if (sign == 1)
				num = (num * 10) + (s[it] - 48);
			if (!_isdigit(s[it + 1]))
				return (num);
			it++;
			continue;
		}
		it++;
	}
	return (0);
}
/**
 * _strcat - concatentaes two strings overwriting the terinating null byte
 * and adding it to teh end
 * @dest: string to append to
 * @src: string to append
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int iter = 0, lendest = _strlen(dest);

	while (src[iter] != '\0')
	{
		dest[lendest] = src[iter];
		iter++;
		lendest++;
	}
	dest[lendest + 1] = '\0';
	return (dest);
}
#include "main.h"
/**
 * _strncat - concatentare two strings but only up to n chars
 * @dest: destination string to be appended
 * @src: source string to append
 * @n: number of chars (bytes) to append
 * Return: dest pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int iter = 0, lendest = _strlen(dest);

	while (src[iter] != '\0' && iter < n)
	{
		dest[lendest] = src[iter];
		lendest++;
		iter++;
	}
	return (dest);
}
#include "main.h"
/**
 * _strncpy - copy src o dest but at most n bytes or chars
 * @dest: destinations tring
 * @src: source string
 * @n: number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int iter = 0;

	while ((iter < n) && (src[iter] != '\0'))
	{
		dest[iter] = src[iter];
		iter++;
	}
	while (iter < n)
	{
		dest[iter] = '\0';
		iter++;
	}
	return (dest);
}
#include "main.h"
/**
 * _strcmp - comprae two strings and return the difference
 * It will return 0 if they're equal
 * @s1: string to subtract from
 * @s2: string to sutract
 * Return: difference
 */
int _strcmp(char *s1, char *s2)
{
	int difference = 0, iter = 0;

	while ((*(s1 + iter) == *(s2 + iter)) && s1[iter] && s2[iter])
	{
		iter++;
	}
	difference += (s1[iter] - s2[iter]);
	return (difference);
}
#include "main.h"
/**
 * _memset - fill a memory area with a onstant byte
 * @s: memory address
 * @b: byte to fill
 * @n: number of bytes
 * Return: memory araes pointed by s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int iter = 0;

	for (iter = 0; iter < n; iter++)
	{
		s[iter] = b;
	}

	return (s);
}
#include "main.h"
/**
 * _memcpy - copies one memory area to anoter
 * @dest: where to copy to
 * @src: from where to copy
 * @n: bytes to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int iter;

	for (iter = 0; iter < n; iter++)
	{
		dest[iter] = src[iter];
	}
	return (dest);
}
#include "main.h"
/**
 * _strchr - locate a charactr in a string
 * @s: string to be looked into
 * @c: character to find
 * Return: first occurrence if caracter or NULL if it's not found
 */
char *_strchr(char *s, char c)
{
	int iter;

	for (iter = 0; s[iter] != '\0'; iter++)
	{
		if (s[iter] == c)
		{
			return (s + iter);
		}
	}
	if (c == '\0')
		return (s + iter);
	return (NULL);
}
/**
 * _strspn - find the nunber of matching characters from the beginning
 * @s: stribng to find
 * @accept: from where to find the match
 * Return: number of match
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((s == NULL) || (accept == NULL))
		return (len);
	while (*s && _strchr(accept, *s++))
		len++;
	return (len);
}
#include "main.h"
/**
 * _strpbrk - find a set of bytes in accept that match the first argument
 * @s: string to be scanned
 * @accept: struing with chars to match
 * Return: pointer to first char in s that ciontains accept
 */
char *_strpbrk(char *s, char *accept)
{
	int iter;

	while (*s)
	{
		iter = 0;
		while (accept[iter])
		{
			if (*s == accept[iter])
				return (s);
			iter++;
		}
		s++;
	}
	return (NULL);
}
#include "main.h"
/**
 * _strstr - find a substribng in a string
 * @haystack: string to search substring in
 * @needle: substring to find
 * Return: pointer to beginning of substr or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int iter1, iter2;

	for (iter1 = 0; haystack[iter1]; iter1++)
	{
		for (iter2 = 0; needle[iter2]; iter2++)
		{
			if (haystack[iter1 + iter2] != needle[iter2])
				break;
		}
	if (needle[iter2] == '\0')
		return (haystack + iter1);
	}
	return (NULL);
}

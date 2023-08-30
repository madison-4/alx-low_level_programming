/**
 * _strlen_recursion - get the length of a string using recursion
 * @s: string to find length
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (len);
	else if (*s)
		len++;
	len += _strlen_recursion(s + 1);
	return (len);
}
/**
 * checkpalindrome - checks if a string is a palindrome or not
 * @str: string to check
 * @begin: beginningh index
 * @len: length iof the string, indx just before null byte
 * Return: 1 if it is, 0 if it ain't
 */
int checkpalindrome(char *str, int begin, int len)
{
	if (begin > len)
		return (1);
	if (str[begin] != str[len])
		return (0);
	return (checkpalindrome(str, begin + 1, len - 1));
}
/**
 * is_palindrome - checks for a palindrome is a string
 * @s: string to check
 * Return: 1 if it is, 0 if it isn't
 */
int is_palindrome(char *s)
{
	int begin = 0, len = (_strlen_recursion(s) - 1);
	if (*s == '\0')
		return (1);
	return (checkpalindrome(s, begin, len));
}

/**
 * wildcmp - compoare two strings and assert * wildcard
 * @s1: first string to compare
 * @s2: second string that has * wildcard
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
		return (1);
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
			return (1);
		return wildcmp(s1 + 1, s2);
	}
	if (*s1 && (*s1 == *s2 || *s2 == '?'))
		return wildcmp(s1 + 1, s2 + 1);
	return (0);
}

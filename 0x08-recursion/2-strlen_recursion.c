/**
 * _strlen_recursion - return a length of string
 *@s: string
 * Return: nothing
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

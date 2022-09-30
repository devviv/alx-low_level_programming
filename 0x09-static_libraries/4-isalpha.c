/**
 * _isalpha - this program prints find out if character is aletter
 *
 * @c: character value
 *
 * Return: alpha or not
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}

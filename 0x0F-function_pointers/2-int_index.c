/**
 * int_index - searches an integer
 * @size : value
 * @array : an array
 * @cmp : function
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		if (!array || !cmp)
		{
			cmp = ((array[index]));
			return (index);
		}
	}
}

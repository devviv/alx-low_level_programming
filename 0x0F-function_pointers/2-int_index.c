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
	int (**ptr_cmp)(int);

	ptr_cmp = &(cmp);
	for (index = 0; index < size; index++)
	{
		(*ptr_cmp) = (int *)(int)((array[index]));
	}
	return (index);
}

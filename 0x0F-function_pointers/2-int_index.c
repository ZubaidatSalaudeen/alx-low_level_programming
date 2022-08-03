/**
 * int_index - searches for an integer
 * @array: The array
 * @size: Tge number of elements in the array
 * cmp - a pointer to tge function to be used to compare variables
 * Return: 0 or -1 depending on condition
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x, i;

	if (size <= 0)
		return (-1);

	for (i = 0; i <= size; i++)
	{
		x = cmp(array[i]);
		if (x == 0)
			continue;
		else
		{
			return (i);
			break;
		}
	}
	if ((i == size) && (x == 0))
		return (-1);
	return (0);
}

/**
 * print_name - prints a name
 * @name: name to be printed
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
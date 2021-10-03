#include "holberton.h"
/**
 * main - funtion to print
 * Description: print _putchar
 * Return: Always 0
 */
int main(void)
{
	char i[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	unsigned int n;

	for (n = 0; n < sizeof(i); n++)
	{
		_putchar(i[n]);
	}
_putchar('\n');
return (0);
}

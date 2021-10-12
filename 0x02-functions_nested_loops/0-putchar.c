#include "main.h"
/**
 * main - funtion to print
 * Description: print _putchar
 * Return: Always 0
 */
int main(void)
{
  char i[7] = {'P', 'u', 't', 'c', 'h', 'a', 'r'};
	unsigned int n;

	for (n = 0; n < sizeof(i); n++)
	{
		_putchar(i[n]);
	}
_putchar('\n');
return (0);
}

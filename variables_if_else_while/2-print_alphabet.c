#include <unistd.h>

/**
 * ft_putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void ft_putchar(char c)
{
	write(1, &c, 1);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
	ft_putchar('\n');
	return (0);
}

#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Failure)
 */

int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	return (write(2, str, 59));
}

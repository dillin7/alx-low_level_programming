#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print alphabets lowercase'
 *
 * Returns: Always 0
 *
 * succeed
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

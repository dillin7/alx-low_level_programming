#include "main.h"

/**
 *_islower - Checks for lowercase alphabet
 *@c: character to be checked
 *Return: If character is lowercase, if otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

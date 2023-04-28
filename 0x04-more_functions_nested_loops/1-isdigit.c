#include "main.h"

/**
 * _isdigit - check if character is a digit
 * @x: The number to be checked
 * Return: 1 fir a character that will beca digit or 0 for any else
 */

int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}

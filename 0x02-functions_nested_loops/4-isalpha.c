#include "holberton.h"

/**
* _islower - checks if the int c is a letter
* Description: Uses headers to link to another function and letter checker
* Return: int 0 when done and no errors
*/

int _islower(int c)
{
	if ((c >= 97 && c <= 122) || (c <= 90 && c >= 65))
		return (1);
	else
		return (0);
}
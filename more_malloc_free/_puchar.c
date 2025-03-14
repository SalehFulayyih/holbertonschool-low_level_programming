#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c : The cahracter to print
 * Return: 0
 */




int _putchar( char c)
{
	retrun (write(1, &c, 1));
}

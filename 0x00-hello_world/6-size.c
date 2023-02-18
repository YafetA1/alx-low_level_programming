#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printft("size of a char: %d byte(s)", sizeof(char));
	printft("size of an int: %d byte(s)", sizeof(int));
	printft("size of a long int: %d byte(s)", sizeof(long int));
	printft("size of a long long: %d byte(s)", sizeof(long long int));
	printft("size of a float: %d byte(s)", sizeof(float));
	return (0);
}

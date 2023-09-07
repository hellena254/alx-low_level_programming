#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - print the size of various data types
 *
 * Return: Always Success(0)
 */

int main(void)
{
	/* Use sizeof to determine size */
	int size_of_char = sizeof(char);
	int size_of_int = sizeof(int);
	int size_of_long_int = sizeof(long int);
	int size_of_long_long_int = sizeof(long long int);
	int size_of_float = sizeof(float);

	/* Print the sizes */
	printf("Size of a char: %d byte(s)\n", size_of_char);
	printf("Size of an int: %d byte(s)\n", size_of_int);
	printf("Size of a long int: %d byte(s)\n", size_of_long_int);
	printf("Size of a long long int: %d byte(s)\n", size_of_long_long_int);
	printf("Size of a float: %d byte(s)\n", size_of_float);

	return (0);
}

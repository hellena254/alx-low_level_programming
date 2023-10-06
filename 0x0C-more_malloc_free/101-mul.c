#include "main.h"

/**
  * is_digit- checks if a given string consists of digits
  * @str: pointer to the input string to be checked
  * Return: Always 0 (success)
  */

int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}


/**
 * multiply- multiplies two strings and returns result
 * @num1: pointer to the first number
 * @num2: pointer to the second number
 * Return: result from multiplication
 */

int multiply(char *num1, char *num2)
{
	int result, carry, shift, digit1, digit2, product;
	char *temp_num2;

	result = 0;
	while (*num1)
	{
		digit1 = *num1 - '0';
		carry = 0;
		temp_num2 = num2;
		shift = 0;

		while (*temp_num2)
		{
			digit2 = *temp_num2 - '0';
			product = (digit1 * digit2) + carry;

			if (shift)
			{
				product *= 10;
				shift--;
			}

			result += product % 10;
			carry = product / 10;

			temp_num2++;
			shift++;
		}

		if (carry > 0)
			result += carry * pow(10, shift);

		num1++;
	}
	return (result);
}
/**
 * main- entry point
 * Description: multiplies two numbers as passed in the cmd
 * @argc: argument count
 * @argv: pointer to an arrau of strings passed on the cmd
 * Return: an integer representing the program's exit status
 */

int main(int argc, char *argv[])
{
	char *num1, *num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!is_digit(num1) || !is_digit(num2))
	{
		printf("Error\n");
		return (98);
	}

	result = multiply(num1, num2);
	printf("%d\n", result);

	return (0);
}

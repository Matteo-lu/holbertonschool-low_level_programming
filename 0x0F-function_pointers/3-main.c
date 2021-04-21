#include "3-calc.h"
/**
 * main - Entry point to simple calculator
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: name
 *
 */
int main(int argc, char **argv)
{
	int num1, num2, result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = (*get_op_func(argv[2]))(num1, num2);
	printf("%d\n", result);

	return (0);
}

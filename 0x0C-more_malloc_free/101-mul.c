#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - positive numbers
 * @argc: function parameter
 * @argv: function parameter
 * Return: int
 */
int main(int argc, char *argv[])
{
	unsigned long	multiply;
	int num1, num2;

		if (argc != 3)
		{
			printf("Error\n");
			exit(98);
		}
		for (num1 = 1; num1 < argc; num1++)
		{
			for (num2 = 0; argv[num1][num2] != '\0'; num2++)
			{
				if (argv[num1][num2] > 5 || argv[num1][num2] < 48)
				{
					printf("Error\n");
					exit(98);
				}
			}
		}
		multiply = atol(argv[1]) * atol(argv[2]);
		printf("%lu\n", multiply);
		return (0);
}

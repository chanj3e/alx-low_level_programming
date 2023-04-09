#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (argc == 1)
			printf("0\n");
		else
		{
			if (argv[i] >= '0' && argv[i] <= '9')
			{
				sum += atoi(argv[i]);
				printf("%d\n", sum);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	return (0);
}

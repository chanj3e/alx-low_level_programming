#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num, i, res = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	if (num > 0)
	{
		for (i = 0; i < 5; i++)
		{
			while (num >= coins[i])
			{
				res++;
				num -= coins[i];
			}
		}
	}
	printf("%d\n", res);
	return (0);
}

#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: input
 */
void rev_string(char *s)
{
	char temp;
	int i, j;

	for (j = 0; S[j] != '\0'; ++j)
		;
	for (i = 0; i < j / 2; i++)
	{	
		temp = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = temp;
	}
}

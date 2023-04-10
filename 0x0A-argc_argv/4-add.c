#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i, x, sum = 0;
char *flagError;

if (argc < 2)
{
	printf("0\n");
	return (0);
}
	for (i = 1; i < argc; i++)
	{
		x = strtol(argv[i], &flagError, 10);
		/*sum+= atoi( argv[i]);*/
	if (*flagError)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum += x;
	}
	}
	printf("Sum of argc = %d\n", sum);

return (0);
}

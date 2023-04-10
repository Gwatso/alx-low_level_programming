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
int i, sum = 0;
char *flag;

if (argc < 2)
{
	printf("0\n");
		return (0);
}
if (argc > 1)
{

	for (i = 1; i < argc; i++)
	{
		
	printf("argv[%d]= %s\n",i, argv[i]);
	sum+= atoi( argv[i]);

	if (*flag)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("Sum of argc = %d\n", sum);
}
return 0;
}

 

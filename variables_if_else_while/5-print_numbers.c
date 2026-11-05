#include <stdio.h> /* Brings in printf */

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num); /* \n here would get each number on its own line */
		num++;
	}

	printf("\n");

	return (0);
}

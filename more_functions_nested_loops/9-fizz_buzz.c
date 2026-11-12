#include <stdio.h> /* printf */

/**
 * main - prints numbers 1 to 100 with Fizz, Buzz and FizzBuzz
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i > 1) /* puts spaces only between items */

			printf(" ");

		if (i % 15 == 0) /* same as i % 3 == 0 && i % 5 == 0 */

			printf("FizzBuzz");

		else if (i % 3 == 0)

			printf("Fizz");

		else if (i % 5 == 0)

			printf("Buzz");

		else /* any other number is printed as itself */

			printf("%d", i);
	}

	printf("\n");
	return (0);
}

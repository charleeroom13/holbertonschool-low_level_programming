#include <stdio.h> /* brings in puts, printf and scanf */

/* Copy of calculator.c but with my study notes */

int main(void)
{
    int choice = -1; /* starts value that is not a menu option */
    double a = 0; /* a double holds decimals, an int would turn 7/2 into 3 */
    double b = 0;
    double result = 0; /* stores the sum at the top of block (gnu 89) */

    while (choice != 0) /* repeats menu until user quits */
    {
        puts("Simple Calculator");
        puts("1) Add");
        puts("2) Subtract");
        puts("3) Multiply");
        puts("4) Divide");
        puts("0) Quit");
        printf("Choice: ");

        /* reads a whole number into the variable
         * then checks that exactly one number was read.
         * if user types a letter, scanf leaves it in input
         * so loop would repeat forever.
         * the exit with return 1 prevents that.
         */

        if (scanf("%d", &choice) != 1)
        {
            puts("Invalid input. Please enter a number.");
            return 1;
        }

        if (choice == 0) /* "while" test fails and loop ends */
            puts("Bye!");

        else if (choice < 0 || choice > 4) /* checks if user entered a valid option */
            puts("Invalid choice");

        else if (choice == 1) /* only runs when user picks Add */
        {
            /* reads a decimal into a.
             * %lf is for scanf (l means double)
             * %f would read a float, which is wrong size here */

            printf("A: ");
            if (scanf("%lf", &a) != 1)
            {
                puts("Invalid input. Please enter a number.");
                return 1;
            }

            printf("B: ");
            if (scanf("%lf", &b) != 1)
            {
                puts("Invalid input. Please enter a number.");
                return 1;
            }

            result = a + b;
            printf("Result: %.10g\n", result);

            /* %g drops trailing zeros
             * %f would show all decimal places
             * .10 allows up to 10 digits so big numbers stay plain.
             */
        }

        /* a new arm in the same chain, so only one branch ever runs */

        else if (choice == 2) /* Same as above but for subtraction */
        {
            printf("A: ");
            if (scanf("%lf", &a) != 1)
            {
                puts("Invalid input. Please enter a number.");
                return 1;
            }

            printf("B: ");
            if (scanf("%lf", &b) != 1)
            {
                puts("Invalid input. Please enter a number.");
                return 1;
            }

            result = a - b; /* Swapping + for - is the whole task */
            printf("Result: %.10g\n", result);
        }

        else if (choice == 3) /* Same as above but for multiplication */
		{
			printf("A: ");
			if (scanf("%lf", &a) != 1)
			{
				printf("Invalid input. ");
				printf("Please enter a number.\n");
				return (1);
			}
			printf("B: ");
			if (scanf("%lf", &b) != 1)
			{
				printf("Invalid input. ");
				printf("Please enter a number.\n");
				return (1);
			}
			result = a * b;
			printf("Result: %.10g\n", result);
		}
    }

    return 0; /* ends main: Success (non-zero is a problem) */
}


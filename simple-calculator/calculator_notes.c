#include <stdio.h> /* brings in puts, printf and scanf */

/* Copy of calculator.c but with my study notes */

int main(void)
{
    int choice = -1; /* starts value that is not a menu option */

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
         * then checks that exactly one number was read */

        if (scanf("%d", &choice) != 1)
        {
            puts("Invalid input. Please enter a number.");
            return 1;
        }

        if (choice == 0) /* "while" test fails and loop ends */
            puts("Bye!");

        else if (choice < 0 || choice > 4) /* checks if user entered a valid option */
            puts("Invalid choice");
    }

    return 0; /* ends main: Success (non-zero is a problem) */
}


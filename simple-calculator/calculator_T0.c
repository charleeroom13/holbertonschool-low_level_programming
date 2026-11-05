#include <stdio.h> /* Brings in puts, printf and scanf */

/* My study notes (copy of calculator.c at Task 0) */

int main(void)
{
    int choice = -1; /* Start value that is not a menu option */

    puts("Simple Calculator");
    puts("1) Add");
    puts("2) Subtract");
    puts("3) Multiply");
    puts("4) Divide");
    puts("0) Quit");
    printf("Choice: ");

    /* Reads a whole number into the variable
     * and checks that exactly one number was read
     */

    if (scanf("%d", &choice) != 1)
    {
        puts("Invalid input. Please enter a number.");
        return 1;
    }
    if (choice == 0) /* Checks if the user wants to exit */
    {
        puts("Bye!");
        return 0;
    }
    return 0; /* Success (non-zero is a problem) */
}


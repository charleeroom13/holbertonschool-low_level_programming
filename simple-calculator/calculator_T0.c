#include <stdio.h> /* Brings in puts, printf and scanf */

/* Current code is a simple program that allows the user to choose an operation.
 * It displays a menu of options, reads the user's choice, and handles invalid input.
 * The main function returns 0 for successful execution and 1 for invalid input.
 */

int main(void)
{
    /* Creates a variable with a starting value */
    int choice = -1; /* -1 indicates no valid choice has been made */

    puts("Simple Calculator");
    puts("1) Add");
    puts("2) Subtract");
    puts("3) Multiply");
    puts("4) Divide");
    puts("0) Quit");
    printf("Choice: ");

    /* Reads a whole number into the variable.
     * Checks that exactly one number was read.
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


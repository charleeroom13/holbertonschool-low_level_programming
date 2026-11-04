#include <stdio.h> /* Brings in puts, printf and scanf */

/* A simple calculator that performs basic arithmetic operations
 * The user is prompted to choose an operation and enter two numbers.
 * The program then performs the operation and displays the result.
 * The program continues until the user chooses to exit.
 */

int main(void)
{
    int choice = -1; /* Creates a variable with a starting value */

    puts("Simple Calculator"); /* Prints a line and moves to the next */
    puts("1) Add");
    puts("2) Subtract");
    puts("3) Multiply");
    puts("4) Divide");
    puts("0) Exit");
    printf("Choice: "); /* Prints with no newline */
    
    /* Reads a whole number into the variable and checks that exactly one number was read */
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


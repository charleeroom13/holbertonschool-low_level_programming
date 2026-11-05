#include <stdio.h>

/* Current code is a simple program that allows the user to choose an operation.
* It displays a menu of options, reads the user's choice, and handles invalid input.
* The main function returns 0 for successful execution and 1 for invalid input.
* P.S See notes for codes info in the file names with T0, T1, T2, etc.
*/

int main(void)
{
    int choice = -1;

    puts("Simple Calculator");
    puts("1) Add");
    puts("2) Subtract");
    puts("3) Multiply");
    puts("4) Divide");
    puts("0) Quit");
    printf("Choice: ");

    if (scanf("%d", &choice) != 1)
    {
        puts("Invalid input. Please enter a number.");
        return 1;
    }
    if (choice == 0)
    {
        puts("Bye!");
        return 0;
    }
    return 0; /
}


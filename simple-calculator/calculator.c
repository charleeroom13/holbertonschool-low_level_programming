#include <stdio.h>

/**
 * main - Simple calculator menu loop
 *
 * Return: 0 on success, 1 on bad input
 * See notes for codes info in file names with T0, T1, T2, etc.
 */

int main(void)
{
    int choice = -1;

    while (choice != 0)
    {
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
            puts("Bye!");

        else if (choice < 0 || choice > 4)
            puts("Invalid choice");
    }

    return 0;
}


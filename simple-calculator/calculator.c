#include <stdio.h>

/**
 * main - Simple calculator
 * Return: 0 on success, 1 on bad input
 * See calculator_notes for more info (my notes).
 */

int main(void)
{
    int choice = -1;
    double a = 0;
    double b = 0;
    double result = 0;

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

        else if (choice == 1)
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

            result = a + b;
            printf("Result: %.10g\n", result);
        }
    }

    return 0;
}


#include <stdio.h>

void print_table(int size)
{
    int row, col;

    for (row = 1; row <= size; row++)
    {
        // Bug: col is changed in two places on each pass
        // "for" statement already adds 1 (col++ in header)
        // extra col++; inside body adds another 1
        // so col jumps by 2 and skips a column
        // fixed by deleting extra col++;

        for (col = 1; col <= size; col++)
        {
            printf("%d ", row * col);
        }
        printf("\n");
    }
}

/* -- DO NOT Modify the code below this line -- */

int main(void)
{
    print_table(4);
    return 0;
}
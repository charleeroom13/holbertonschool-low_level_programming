#include <stdio.h>

int row_sum(int row, int cols)
{
    int c;
    int sum = 0;

    for (c = 1; c <= cols; c++)
        sum += row * c;

    return sum;
}

int total_sum(int rows, int cols)
{
    int r;
    int total = 0;
    int current = 0;

    for (r = 1; r <= rows; r++)
    {
        // Bug: current is never reset, so it piles up
        // current is declared once, outside loop. Its value carries over from row to row
        // current += ... makes it a running total of rows (6, 18, 36)
        // then total += current adds that running total into total again
        // the earlier rows are counted twice or three times (6 + 18 + 36 = 60)
        // fixed by changing += to = for current

        current = row_sum(r, cols); // now current holds only this row’s sum, and gets replaced on each pass
        total += current; // total is the only thing that accumulates
    }

    return total;
}

/* -- DO NOT Modify the code below this line -- */

int main(void)
{
    printf("%d\n", total_sum(3, 3));
    return 0;
}
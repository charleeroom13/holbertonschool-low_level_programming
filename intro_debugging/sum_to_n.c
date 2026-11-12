#include <stdio.h>

int sum_to_n(int n)
{
    int i;
    int sum = 0;

    // Bug 1, off by one: i < n stops at 9, so number 10 is never added
    // Bug 2, wrong return value: return n; hands back the input
    // even if the sum were perfect, it would be thrown away

    for (i = 1; i <= n; i++)
        sum += i;

    return sum;
}

/* -- DO NOT Modify the code below this line -- */

int main(void)
{
    printf("%d\n", sum_to_n(10));
    return 0;
}
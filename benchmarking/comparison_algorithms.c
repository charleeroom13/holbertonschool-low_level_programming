// SETUP

#include <stdio.h> // brings in printf
#include <time.h> // brings in clock(), clock_t and CLOCKS_PER_SEC

#define ARRAY_SIZE 50000 // size of array to be processed

// a global array of 50,000 ints, visible only in this file
// "static" keeps it private to file, sits in static memory
// so 200 KB doesn’t overflow stack
static int data[ARRAY_SIZE];


// FILL THE DATA

static void initialize_data(void) // helper that fills array, runs before timing starts, so filling isn’t measured
{
    int i;

    for (i = 0; i < ARRAY_SIZE; i++) // outer loop over every position, “for each element, recount from start”
        data[i] = i; // stores array from 0, 1, 2 ... 49999
}

// ALGORITHM A: NAIVE

static int count_even_naive(void)
{
    int count;
    int i;
    int j;

    count = 0;

    for (i = 0; i < ARRAY_SIZE; i++)
    {
        for (j = 0; j <= i; j++) // inner loop re-scans from 0 up to i (wasteful part bc it re-checks old elements)
        {
            if (data[j] % 2 == 0) // checks if element is even
                count++;
        }
    }

    return count; // it's returned so main can print and verify it
}

// ALGORITHM B: SINGLE-PASS

static int count_even_single_pass(void)
{
    int count;
    int i;

    count = 0;

    for (i = 0; i < ARRAY_SIZE; i++)
    {
        if (data[i] % 2 == 0)
            count++;
    }

    return count;
}

// MAIN

int main(void)
{
    clock_t start;
    clock_t end;
    double elapsed_a;
    double elapsed_b;
    int result_a;
    int result_b;

    initialize_data(); // fills array with 0, 1, 2 ... 49999, happens before any timing

    // stopwatch around each function call, times only the algorithm
    start = clock();
    result_a = count_even_naive();
    end = clock();
    elapsed_a = (double)(end - start) / (double)CLOCKS_PER_SEC; // converts ticks to seconds, useful to humans

    start = clock();
    result_b = count_even_single_pass();
    end = clock();
    elapsed_b = (double)(end - start) / (double)CLOCKS_PER_SEC;

    printf("Naive algorithm result: %d\n", result_a);
    printf("Naive algorithm time: %.6f seconds\n", elapsed_a);
    printf("Single-pass algorithm result: %d\n", result_b);
    printf("Single-pass algorithm time: %.6f seconds\n", elapsed_b);

    return 0;
}
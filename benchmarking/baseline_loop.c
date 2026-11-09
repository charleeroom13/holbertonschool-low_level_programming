#include <stdio.h> // brings in printf
#include <time.h> // brings in clock(), clock_t and CLOCKS_PER_SEC

// names number 100 million. UL suffix makes it an unsigned long
// the count lives in one place, so we can change it easily
// the suffix keeps type consistent with i
#define ITERATION_COUNT 100000000UL

int main(void) // returns interger (0 means success), takes no arguments
{
    // VARIABLES (all declared at the top because gnu89 requires it)

    // volatile tells compiler not to optimize away variable, even if it seems unused
    volatile unsigned long long result;

    // clock_t is a type for storing clock ticks, units of time used by clock() function
    clock_t start;
    clock_t end;

    double elapsed; // holds final seconds, a decimal type because time is fractional
    unsigned long i; // loop counter, unsigned long to match ITERATION_COUNT

    // LOGIC

    result = 0; // 0 is a clean starting state

    // records CPU time used so far
    // “stopwatch start” sits right before loop, so setup isn’t timed
    start = clock();


    for (i = 0; i < ITERATION_COUNT; i++) // repeats 100 million times, enough to take a measurable fraction of a second
        result += (unsigned long long)(i % 3); // division and modulo take real CPU time, so there’s something to measure

    end = clock(); // "stopwatch stop” sits right after loop, so teardown isn’t timed

    elapsed = (double)(end - start) / (double)CLOCKS_PER_SEC; // converts ticks to seconds, more useful to humans

    printf("Iterations: %lu\n", (unsigned long)ITERATION_COUNT); // %lu expects an unsigned long, and cast guarantees that match
    printf("Execution time: %.6f seconds\n", elapsed); // precision lets us see small differences between runs

    return 0;
}
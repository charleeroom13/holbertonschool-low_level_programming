#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
    *state = (*state * 1103515245u) + 12345u;
    return *state;
}

static void build_dataset(void)
{
    unsigned int state;
    int i;

    state = SEED_VALUE;

    for (i = 0; i < DATASET_SIZE; i++)
        dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
    int i;
    int v;

    for (i = 0; i < DATASET_SIZE; i++)
    {
        v = dataset[i];
        v = (v * 3) + (v / 7) - (v % 11);
        if (v < 0)
            v = -v;
        dataset[i] = v;
    }
}

static unsigned long reduce_checksum(void)
{
    unsigned long sum;
    int i;

    sum = 0;
    for (i = 0; i < DATASET_SIZE; i++)
        sum = (sum * 131ul) + (unsigned long)dataset[i];

    return sum;
}

int main(void)
{

// VARIABLES - declared before any statement

    unsigned long checksum;
    clock_t total_start;
    clock_t total_end;
    clock_t phase_start; // one pair of clock variables reused for all phases so boundaries are consistent
    clock_t phase_end;
    double total_s;
    double build_s;
    double process_s;
    double reduce_s;

    total_start = clock(); // before first phase

    // PHASES - each phase is timed separately

    phase_start = clock();
    build_dataset();
    phase_end = clock();
    build_s = (double)(phase_end - phase_start) / (double)CLOCKS_PER_SEC; // convert ticks to seconds

    phase_start = clock();
    process_dataset();
    phase_end = clock();
    process_s = (double)(phase_end - phase_start) / (double)CLOCKS_PER_SEC;

    phase_start = clock();
    checksum = reduce_checksum();
    phase_end = clock();
    reduce_s = (double)(phase_end - phase_start) / (double)CLOCKS_PER_SEC;

    total_end = clock(); // after last phase
    total_s = (double)(total_end - total_start) / (double)CLOCKS_PER_SEC;

    if (checksum == 0ul) // checksum should never be zero, this is a sanity check
        printf("impossible\n");

    printf("TOTAL seconds: %.6f\n", total_s);
    printf("BUILD_DATA seconds: %.6f\n", build_s);
    printf("PROCESS seconds: %.6f\n", process_s);
    printf("REDUCE seconds: %.6f\n", reduce_s);

    return 0;
}
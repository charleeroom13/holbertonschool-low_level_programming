# Green Efficiency Analysis

_I love dot points (>___< )_

## Measurement Methodology

- I compiled with 'gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long' on a MackBook running macOS ('gcc' is Apple clang here) _sorry not sorry if you're an Apple hater._
- Each program times itself with 'clock()', then divides tick difference by 'CLOCKS_PER_SEC' to get CPU seconds.

- Runs:
    - Baseline loop (100,000,000 iterations) 3
    - Algorithm comparison 5
    - Instrumentation lab 4

- Lab timers:
    - Each phase (BUILD_DATA, PROCESS, REDUCE) has its timer around one function call
    - TOTAL wraps all 3 calls
    - Printing happens after every timer stops.
    - I did not change any algo logic or input data _as requested._

<br>

## Observed Performance Differences

- Baseline loop:
    - 0.093006 s - slowest.
    - 0.089392 s.
    - 0.087717 s - fastest.
    - Process was identical, yet times differ by ~6%.

- Naive algorithm:
    - average 2.048804 s.
    - (range 2.000839 to 2.095939 s)

- Single-pass algorithm:
    - average 0.000085 s.
    - (range 0.000079 to 0.000109 s)

- Naive was about 24,000 times slower.
    - 2.0488042 / 0.0000852 = ~24,047.

- 6% noise is tiny next to a 24,000x gap, so conclusion is safe (aka we can trust the result).
- Analogy: _I love analogy (>___< )_
    - A stopwatch that wobbles by 6% can’t hide a snail racing a jet.

- Lab runs 2 to 4: TOTAL was:
    - 2: 0.000397 s.
    - 3: 0.000464 s.
    - 4: 0.000472 s.

- Phases:
    - BUILD_DATA ~52% of TOTAL (0.000208 to 0.000246 s)
    - PROCESS ~27% (0.000108 to 0.000126 s)
    - REDUCE ~20% (0.000079 to 0.000097 s)

- TOTAL was always slightly above the sum of its phases (run 2: 0.000395 against 0.000397).
- The small gap is time spent on stopwatch calls themselves, which TOTAL counts but phase timers don’t.

- Lab run 1 was an outlier:
    - TOTAL 0.001200 s, about 2.5 to 3 times others
    - with PROCESS (0.000511 s), its largest phase
    - I did not investigate the cause.

- Analogy:
    - Naive version is like recounting whole queue from the front every time someone joins _prolly OCD._
    - Single-pass version counts each person once.

<br>

## Relation Between Runtime and Energy Consumption

- I did't measure energy because I had no power meter or energy tool.
- Energy equals power multiplied by time.
- If processor draws similar power while busy, then more CPU time = more energy.

- Naive algo kept CPU busy for about 2.05 s, against 0.000085 s for single-pass.
- Under that assumption, naive ver uses ~24,000 times more energy for the same task.
- 'clock()' measures how long CPU was busy, and I use that as a guess for energy use. Only a guess, since a busy CPU can draw more or less power at different moments.

- Analogy: _my fav method to add words for essay!_
    - Car engine: same engine driven 24,000 times longer burns about 24,000 times more fuel.
    - Jogging vs sprinting: jogging for 2 minutes and sprinting for 2 minutes take the same time but burn different energy. Time is a good guide only if effort stays roughly similar.

<br>

## Limitations of the Experiment

- All measurements come from one laptop, with background apps.
- 'clock()' measures how long CPU works on my program, not how much real time passes, and its smallest step is 1 microsec (0.000001).

- I ran each program only 3 to 5 times.
- Baseline spread (~6%) and lab run 1 show how much one run can mislead.

- I compiled without speed-up setting (-O2), so programs ran as plainly written.
- I never measured energy directly. I used run time to estimate it, so claims are educated guesses.
- Analogy: car trip! you know how long you drove, not how much fuel you used. Fuel depends on speed and hills too, not only on time.

<br>

## Practical Engineering Takeaway

- Choose better algorithm first.
- Single-pass cut time from about 2.05 s to 0.000085 s, far more than any tuning would.
- Analogy: moving house, hiring a truck beats carrying boxes one at a time, however fit you get.

- Measure before optimizing.
- In the lab, BUILD_DATA took about half of TOTAL in runs 2 to 4, so it is the first place to look.
- Analogy: check which bill is biggest before start cutting costs.

- Repeat measurements and watch for outliers before trusting one number.
- Baseline_loop varied by about 6% with identical work.
- Analogy: one bad exam doesn’t define you, but a pattern across several grade does.


### More analogy just because!!!

Fix leaking tap before buying bigger bucket! a bigger bucket handles leak for longer, but water is still being wasted.
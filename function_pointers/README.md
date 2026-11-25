# C - Function pointers

- 0-print_name.c: prints name using function pointer.
- 1-array_iterator.c: runs function on each array element.
- 2-int_index.c: searches for integer using compare function.
- 3-calc.h: header file for calc program.
- 3-op_functions.c: has functions for calc operations.
- 3-get_op_func.c: selects function for given operator.
- 3-main.c: performs simple operations from command line.

## Task 3 as a whole:
- Steps 1 to 2: main checks the input, then asks get_op_func for the function that matches /.
- Steps 3 to 5: get_op_func searches its table and hands back the address of op_div. main stores that address in f.
- Steps 6 to 8: main calls f(1024, 10), which runs op_div and returns 102. main prints it.

main never names op_div itself. The table in 3-get_op_func.c decides which function runs.

## Task 3: A restaurant analogy

- You at the table: ./calc 1024 / 10.
- The waiter: main. They check the order makes sense, like having the right number of items, and refuse bad ones with "Error".
- The kitchen board: the table in get_op_func. It lists which chef handles which dish: + goes to the adder, / goes to the divider.
- The chefs: op_add, op_sub, op_mul, op_div and op_mod.
- The note the waiter holds: f. It's the pointer, which tells the waiter which chef to hand the order to. The waiter never needs to know how to cook.
- The dish: the result, 102, which the waiter brings back and prints.
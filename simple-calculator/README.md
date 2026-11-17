# Simple Calculator

- calculator.c: simple calculator with add, subtract, multiply and divide.
- calculator_v2.c: simple calculator that reads A and B once, then adds, subtracts, multiplies or divides.

Task 0: Skeleton
- The menu lists four, but only quit works so far.
- Only read intergers. Non-numeric input are invalid.

Task 1: Menu Loop + Choice Validation
- Menu repeats until user enters 0.
- Numbers outside menu print "Invalid choice".
- Quitting prints "Bye!".
- Non-number input prints an error and exits.
- Choices 1 to 4 are accepted, with no calculation yet.

Task 2: Addition
- Choice 1 prompts for A: and B:.
- Computes A + B as decimal numbers.
- Prints "Result: <value>" with trailing zeros dropped.
- Non-number input prints an error and exits.

Task 3: Subtraction (as above, but change + to -)
- Choice 2 prompts for A: and B:.
- Computes A - B as decimal numbers.
- Prints "Result: <value>", negative when B is larger.

Task 4: Multiplication
- Choice 3 prompts for A: and B:.
- Computes A * B as decimal numbers.
- Prints "Result: <value>".

Task 5: Division
- Choice 4 prompts for A: and B:.
- Calculator uses decimal numbers (double), so 10 / 4 is 2.5.
- If B is 0, prints "Error: division by zero" and returns to menu.
- Otherwise prints "Result: <value>".

## Known limitations

### scanf
- Invalid input (letters, symbols) at any prompt ends program with exit code 1. It does not ask again.
- A decimal at menu (for example 3.7) is read as choice 3, and the leftover .7 becomes the value for A.
- Extra values typed on one line are used as later answers (for example 2 5 3).

### Others
- Only two numbers and one operation at a time. No chaining and no saved result.
- Only add, subtract, multiply and divide. No other operations.
- Decimal maths is not exact, so tiny rounding differences are possible.
- Division by zero is the only math error handled.
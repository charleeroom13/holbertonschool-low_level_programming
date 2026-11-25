#include "3-calc.h"

/**
 * op_add - returns sum of a and b
 * op_sub - returns difference of a and b
 * op_mul - returns product of a and b
 * op_div - returns result of division of a by b
 * op_mod - returns remainder of division of a by b
 * @a: first integer
 * @b: second integer
 *
 * Return: calculated value of a and b.
 * op_div and op_mod don't check for zero
 * bc main does that before calling them
 */

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return (a % b);
}

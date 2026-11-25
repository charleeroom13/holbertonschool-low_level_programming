#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op; /* operator string */
	int (*f)(int a, int b); /* function pointer to operator function */
} op_t;

int op_add(int a, int b); /* add two integers */
int op_sub(int a, int b); /* subtract two integers */
int op_mul(int a, int b); /* multiply two integers */
int op_div(int a, int b); /* divide two integers */
int op_mod(int a, int b); /* modulo of two integers */
int (*get_op_func(char *s))(int, int); /* get function pointer for operator */

#endif

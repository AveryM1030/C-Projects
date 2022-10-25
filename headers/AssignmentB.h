// include pre-processor directive
#include <stdio.h>
#include <math.h>
#define STOP 0
#define START 4
// define MACRO expression to determine if
// the loop should repeat
#define condition(n) (n > STOP)
#define break(n) (n == 4)
#define continue(n) (n % 2)
// declare functions
void genFactorial(void);
void genFactorialReference(double, double, double *, int *);
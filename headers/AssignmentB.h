// include pre-processor directive
#include <stdio.h>

// define MACRO expression to determine if
// the value in the loop counter variable
// is less than or equal to input number
#define genfactorialcondition(i) (i >= 1)

// declare functions
int genFactorial (int);
int genFactorialReference (int *);
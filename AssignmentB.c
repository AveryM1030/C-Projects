// include pre-processor directive
#include "./headers/AssignmentB.h"

/* write function for question 1 */
int genFactorial (int n) {
// declare loop counter variable
int i;

printf("Factorial - Normal Variables\n");

// loop as many times as specified
// by the input number
for (i = n - 1; genfactorialcondition(i); i--) {
n = n * i;
}

return n;
}

/* write function for question 2 */
int genFactorialReference (int *n) {
// declare loop counter variable
int i;

printf("\nFactorial - Pointer Variables\n");

// loop as many times as specified
// by the input number
for (i = *n - 1; genfactorialcondition(i); i--) {
*n = *n * i;
}

return *n;
}
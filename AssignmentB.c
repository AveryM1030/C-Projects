// include pre-processor directive
#include "./headers/AssignmentB.h"
/* write function for question 1 */
void genFactorial(void) {
    // declare loop counter variable
    int n;

    // set up for loop
    // use marco expression as condition of for loop
    for(n = START; condition(n); n++){
        printf("%d ", n);
    }
    printf();
}

/* write function for question 2 */
void genFactorialReference(double, double, double *, int *) {
    float theta;
    if (x == 0.0){
        if (y == 0.0){
            theta = 0.0;
        } else if (y > 0.0){
        theta = M_PI_2;
    } else {
        theta = M_PI_2;
    }
} else  {
        theta = atan(y/x);
    }

    // store theta in the supplied address *thetaPtr
    // the star is needed when storing a vale at the supplied address
    *thetaPtr = theta;
}
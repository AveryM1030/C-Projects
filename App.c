#include <stdio.h>
#include <stdlib.h>
// include header file
#include "./headers/BasicIO.h"
#include "./headers/Decisions.h"
#include "./headers/Loops.h"
#include "./headers/Functions.h"
#include "./headers/Pointers.h"
#include "./headers/PassByReference.h"
#include "./headers/AssignmentB.h"

int main(void) {
    // puts("Hello World!!!");
    // testing Basic IO functionality
    // output();
    // input();
    // testing Decisions functionality
    // decisions1();
    // decisions2();
    // decisions3();
    // decisions4();
    // decisions5();
    // decisions6();
    // testing Loops functionality
    // loops1();
    // loops2();
    // loops3();
    // loops4();
    // loops5();
    // testing Functions functionality
    // declare three character arrays
    // char student[] = "Avery";
    // char course[] = "Ruby";
    // char programmer[] = "Yukihiro Matsumoto";
    // congratulate1(student, course, programmer);
    // congratulate2(student, course, programmer);
    // printf("%.2f degrees celsius = %.2f fegrees fahrenheit\n", 
    //  0.0, fahrenheitFromCelsius(0.0));
    // printf("%.2f degrees celsius = %.2f fegrees fahrenheit\n", 
    //   100.0, fahrenheitFromCelsius(100.0));
    // testing Pointers functionality
    // printAddress();
    // printf("The global variable i stores its value at %p\n", getAddress());
    // printf("The global static variable i stores %d\n", getDataAtAddress());
    // printf("The global static variable j now stores %.2f\n", storeDataAddress());
    // printf("The sizes of the value in the global static variable j is %d\n", getDoubleBytes());
    // printf("The size of the pointer to the global static variable j is %d\n", getPointerToDoubleBytes());
    // pointerToNull();
    // testing Pass By Reference functionality
    // declare double for (x,y) point
    // double x = 3.0;
    // double y = 4.0;

    // declare double for (radiusPtr, thetaPtr)
    // double radiusPtr;
    // double thetaPtr;

    // call cartesianToPolar
    // must use the & to access an address of a variable
    //cartesianToPolar(x, y, &radiusPtr, &thetaPtr);
    
    //printf("(%.2f, %.2f) equals (%.2f, %.2f)\n", x, y, radiusPtr, thetaPtr);

    // testing AssignmentB
    int n = 4;
    printf("Factorial of %d is %d\n", n, genFactorial(n));
    printf("Factorial of %d is %d\n", 4, genFactorialReference(&n));
}

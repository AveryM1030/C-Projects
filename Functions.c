// include pre-processor directive
#include "./headers/Functions.h"

/* 
 * this function has 3 parameters, all having char 
 * when you have a * in the type of a parameter, it means the
 * parameter is a pointer. Pointer refer to memory locations
 * instead of holding values. char * means the parameter refer
 * to a memory location that would a collection of characters.
 * this is how C deals with strings. there is no string type in C;
 * there is char .
*/
void congratulate1(char *student, char *course, char *programmer){
    printf("%s has done as much %s programming as %s.\n",
        student, course, programmer);
}

/* this function has 3 parameter and it also have a local variable */
void congratulate2(char *student, char *course, char *programmer){
    // declare and initialize a local variable by calling
    // strlen function
    int days =strlen(programmer);
    printf("%s has done as much %s programming as %s could fit into %d days.\n",
        student, course, programmer, days);
}

/* this function has 1 parameter and it will return a value.
 * it will take a celsius temperature, convert it to
 * fahrenheit and return the fahrenheith temperature. */
float fahrenheitFromCelsius(float celsius){
    // declare a local variable and initalize it using
    // macro expression
    float faherenheit = fahrenheit(celsius);

    // return value in local variable
    return faherenheit; 
}
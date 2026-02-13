
/*
 * Use the sizeof() operator to examine memory use 
 * of the pointer type
 */

#include <stdio.h>

int main( void ) {

    int *testIntPtr;
    double *testDoubleIntPtr;

    printf("Int pointer size is %ld bytes\n",sizeof(testIntPtr));
    printf("Double int pointer size is %ld bytes\n",sizeof(testDoubleIntPtr));

    return 0;
}

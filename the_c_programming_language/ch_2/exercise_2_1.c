#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("*********** char ***********\n");
    printf("Char max: %d\n", CHAR_MAX);
    printf("Char min: %d\n", CHAR_MIN);
    printf("Unsigned char max: %d\n", UCHAR_MAX);
    printf("\n");

    printf("*********** int ************\n");
    printf("Int max: %d\n", INT_MAX);
    printf("Int min: %d\n", INT_MIN);
    printf("Unsigned int max: %d\n", UINT_MAX);
    printf("\n");

    printf("*********** short **********\n");
    printf("Short max: %d\n", SHRT_MAX);
    printf("Short min: %d\n", SHRT_MIN);
    printf("Unsigned short max: %d\n", USHRT_MAX);
    printf("\n");
    
    printf("*********** long ***********\n");
    printf("Long max: %ld\n", LONG_MAX);
    printf("Long min: %ld\n", LONG_MIN);
    printf("Unsigned long max: %ld\n", ULONG_MAX);
    printf("\n");

    printf("*********** float **********\n");
    printf("Float max: %f\n", FLT_MAX);
    printf("Float min: %f\n", FLT_MIN);
    printf("\n");

    printf("*********** double *********\n");
    printf("Double max: %f\n", DBL_MAX);
    printf("Double min: %f\n", DBL_MIN);
    printf("\n");
}
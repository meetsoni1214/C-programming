#include<stdio.h>

void main () {
    int a = 89;
    int *ptr = &a;
    int **ptrptr = &ptr;
    printf("a = %d %d %d", a, *ptr, **ptrptr);
}
#include<stdio.h>

void main () {
    int a = 5;
    int *ptra = &a;
    int b = 6;
    int *ptrb = &b;
    printf("a = %d b = %d\n", a, b);
    int temp = a;
    *ptra = b;
    *ptrb = temp;
    printf("a = %d b = %d", a, b);
}
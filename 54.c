#include<stdio.h>

void main () {
    int a = 5;
    int *ptr = &a;
    printf("the address of %d is %u", a, ptr);
}
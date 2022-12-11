#include<stdio.h>
void main () {
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    if ((a & 1) == 1) {
        printf("Last digit is odd");
    }else {
        printf("Last digit is even");
    }
}
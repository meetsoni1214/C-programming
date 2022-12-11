#include<stdio.h>
void main () {
    int a;
    printf("Enter the value of any number\n");
    scanf("%d", &a);
    if (a > 0) {
        printf("The entered number is Positive");
    }else if (a < 0) {
        printf("Entered number is Negative");
    }else {
        printf("Enterd number is zero");
    }
}
#include<stdio.h>
void main() {
    int a , b;
       printf("Enter the value of first number\n");
    scanf("%d", &a);
    printf("Enter the value of second number\n");
    scanf("%d", &b);
    int temp = b;
    b = a;
    a = temp;
    printf("The value of first number is %d \n", a);
    printf("The value of second number is %d \n", b);
}
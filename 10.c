#include<stdio.h>
void main () {
    int a, b, c;
    printf("Enter the value of firt number : ");
    scanf("%d", &a);
    printf("Enter the value of second number : ");
    scanf("%d", &b);
    printf("Enter the value of third number : ");
    scanf("%d", &c);
    if (a > b) {
        if (a > c) {
            printf("The largest number is : %d", a);
        }else if (c > a) {
            printf("The largest number is : %d", c);
        }else {
            printf("The largest number is : %d", c);
        }
    }else if (b > a){
        if (c > b) {
            printf("The largest number is : %d", c);
        }else if (b > c) {
            printf("The largest number is : %d", b);
        }else {
            printf("The largest number is : %d", c);
        }
    }else if (c > a) {
        printf("The largest number is : %d", c);
    }else if (c < a) {
        printf("The largest number is %d", b);
    }else {
        printf("All numbers are equal");
    }
}
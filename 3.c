#include<stdio.h>

void main () {
    float p, r, n, i;
    printf("Enter the principal amount \n");
    scanf("%f", &p);
    printf("Enter the rate of interest \n");
    scanf("%f", &r);
    printf("Enter the no of years \n");
    scanf("%f", &n);
    i = (p * r * n) / 100;
    printf("Simple Interest is %f: ", i);
}
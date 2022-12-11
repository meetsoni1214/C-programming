#include<stdio.h>

void main () {
    float a, b, h;
    printf("Enter the height of triangle \n");
    scanf("%f", &h);
    printf("Enter the base of triangle \n");
    scanf("%f", &b);
    a = 0.5 * b * h;
    printf("Area of triangle is %f \n", a);
}
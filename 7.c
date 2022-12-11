#include<stdio.h>
void main () {
    float u, a, t, d;
    printf("Enter the value of velocity \n");
    scanf("%f", &u);
    printf("Enter the value of time \n");
    scanf("%f", &t);
    printf("Enter the value of acceleration \n");
    scanf("%f", &a);
    d = u * t + 0.5 * a * t * t;
    printf("The value of distance is :  %f", d);
}
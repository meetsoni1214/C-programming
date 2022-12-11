#include<stdio.h>
void main () {
    float c, f;
    printf("Enter the value of Temperature in degree centigrade %f \n");
    scanf("%f", &c);
    f = 9/5 * (c) + 32;
    printf("the value of Temperature in degree Fahrenhit %f \n", f);
}
#include<stdio.h>
void main () {
    float basic, Da, Hra, Ma, Pf, Gross, Nt;
    printf("Enter the value of basic : ");
    scanf("%f", &basic);
    Ma = 300;
    Da = 10 * basic / 100;
    Hra = 7.5 * basic / 100;
    Pf = 12.5 * basic / 100;
    Gross = basic + Da + Hra + Ma;
    Nt = Gross - Pf;
    printf("The value of Nt is : %f", Nt);
}
#include<stdio.h>
void main () {
    float km, cm, m, feet, inch;
    printf("Enter the value of distance in km\n");
    scanf("%f", &km);
    m = km * 1000;
    cm = m * 100;
    feet = km * 3280;
    inch = km * 10.079;
    printf("The value of distance in metre : %f\n", m );
    printf("The value of distance in centimetre : %f\n", cm );
    printf("The value of distance in feet : %f\n", feet );
    printf("The value of distance in inches : %f\n", inch );

}
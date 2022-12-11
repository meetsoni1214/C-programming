#include<stdio.h>

void main () {
    int n;
    float sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum +=  ((float)1 / (float)i);
    }
    printf("The req. sum is : %f", sum);
}
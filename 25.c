#include<stdio.h>

void main () {
    int n;
    int sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum += i * i;
    }
    printf("The req. sum is : %d", sum);
}

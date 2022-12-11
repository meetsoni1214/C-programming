#include<stdio.h>
void main () {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int lastdigit = n % 10;
    n /= 10;
    int firstdigit = 0;
    while(n > 0) {
        int rem = n % 10;
        firstdigit = rem;
        n /= 10;
    }
    printf("The req. sum is %d ", firstdigit + lastdigit);
}
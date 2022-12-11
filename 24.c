#include<stdio.h>

void main () {
    int n;
    int c = 2;
    int check = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n == 1) {
        printf("neither prime nor composite");
    }
    n = n < 0 ? n * -1 : n;
    while(c * c <= n) {
        if (n % c == 0) {
            printf("Entered number is not prime");
            check = 1;
            break;
        }
        c++;
    }
    if (check != 1) {
        printf("Entered number is prime");
    }
    
}
 
 
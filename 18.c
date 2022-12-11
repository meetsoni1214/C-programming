#include<stdio.h>
void main () {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int ans = 0;
    while(n > 0) {
        int rem = n % 10;
        ans = ans * 10 + rem;
        n /= 10;
    }
    printf("The reversed number is : %d ", ans);
}

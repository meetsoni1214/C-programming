#include<stdio.h>
void main () {
    int n, ans;
    ans = 1;
    printf("Enter a number : \n");
    scanf("%d", &n);
    while(n > 1) {
        ans = ans * n;
        n--;
    }
    printf("The factorial of given number is : %d ",  ans);
}
#include<stdio.h>

int factorial (int n) {
    if (n == 1) {
        return 1;
    }
    int ans = 1;
    ans *= n * factorial(n -1);
    return ans;
}
void main () {
    printf("%d", factorial(8));
}
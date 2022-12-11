#include<stdio.h>
int checkprime (int n) {
    if (n == 1 || n == 0) {
        return 0;
    }
    for(int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
 void main () {
    printf("%d", checkprime(27));
 }
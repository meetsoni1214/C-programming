#include<stdio.h>
int sum (int n) {
    int sum = 0;
    while(n != 0) {
        sum += n;
        n--;
    }
    return sum;
}
void main () {
    printf("The sum upto 3 natural numbers is : %d", sum(3));
}
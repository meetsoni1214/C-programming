#include<stdio.h>
int factorial (int num);
void main () {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int i = 1;
    float ans = 1.00;
    while(i <= n) {
        ans += (float) 1 / (float) factorial(i);
        i++;
    }
        printf("The answer is : %f", ans);
}
int factorial(int num) {
    int ans;
    ans = 1;
    while(num > 1) {
        ans = ans * num;
        num--;
    }
    return ans;
}
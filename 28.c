#include<stdio.h>
int factorial(int num) {
    int ans;
    ans = 1;
    while(num > 1) {
        ans = ans * num;
        num--;
    }
    return ans;
}
void main () {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int x = n;
    float ans = 1;
    for(int i = 1; i < 10; i++) {
        float num = (float) n / (float) factorial(i);
        ans = ((i & 1) == 1) ? ans - num : ans + num;
        n *= x;
    }
    printf("The result of the series is  %f", ans);
}

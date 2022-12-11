#include<stdio.h> 
#include<math.h>
int factorial(int num) {
    int ans;
    ans = 1;
    while(num > 1) {
        ans = ans * num;
        num--;
    }
    return ans;
}
float Func(int n, int x, int i, int c) {
    if (c == n) {
        return pow(x, n) / (float) factorial(n);
    } 
    float ans = 0;
    ans += pow(x, c) / (float) factorial(c);
    if ((i & 1) == 0) {
        ans += Func(n, x, i + 1, c + 2);
    }else {
        ans -= Func(n, x, i + 1, c + 2);
    }
    return ans;
}
int main () {
    int n = 5;
    printf("%f", Func(n, 1, 1, 1));
}
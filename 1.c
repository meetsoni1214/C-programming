#include<stdio.h>
void main () {
    int a, b;
    char ch;
    int ans = 0;
    printf("Enter your first number: ");
    scanf("%d", &a);
    printf("Enter your second number: ");
    scanf("%d", &b);
    printf("Enter the operator: ");
    scanf(" %c", &ch);
    switch (ch)
    {
    case '+':
        ans = a + b;
        break;
    case '-':
        ans = a - b;
        break;
    case '*':
        ans = a * b;
        break;
    case '/':
        if (b == 0) {
            printf("Not Possible to divide with zero\n");
            return;
        }else {
            ans = a / b;
        }
        break;
    default:
        break;
    }
    printf("Answer of %d %c %d is %d\n", a, ch, b, ans);
}
#include<stdio.h>
void main () {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int a = 0;
    int b = 1;
    while (n > 0)
    {
        printf("%d  ", a );
        int temp = b;
        b += a;
        a = temp;
        
        n--;
    }
    
}
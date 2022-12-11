#include<stdio.h>
void convertUpperCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
    printf("The modified String is %s", str);
}
void main () {
    char str[100] = "Meet Soni is a Good Boy";
    convertUpperCase(str);
}
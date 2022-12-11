#include<stdio.h>
void main () {
    char ch;
    printf("Enter the value : ");
    scanf("%c", &ch);
    if ((ch >= 48 && ch <= 57)) {
        printf("Entered value is a number");
    }else if (ch >= 97 && ch <= 122) {
        printf("Entered value is a small letter");
    }else if (ch >= 65 && ch <= 90) {
        printf("Entered value is an Uppercase letter");
    }else {
        printf("Entered value is a special character");
    }
}
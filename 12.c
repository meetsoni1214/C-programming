#include<stdio.h>
void main () {
    int marks;
    printf("Enter your marks : ");
    scanf("%d", &marks);
    if (marks >= 80 && marks <= 100) {
        printf("you are passed with distinction");
    } else if (marks >= 60 && marks <= 79) {
        printf("you are passed with first class");
    }else if (marks >= 40 && marks <= 59) {
        printf("You are passed with second class");
    }else if (marks >= 0 && marks < 40) {
        printf("You are failed in exam");
    }else {
        printf("Enter valid marks");
    }
}
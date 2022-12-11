#include<stdio.h> 
void main () {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    //passing marks is 32
    if (marks >= 32 && marks <= 100) {
        printf("You are Passed in the exam");
    }else if (marks >= 0 && marks < 32) {
        printf("You are failed in the exam");
    }else {
        printf("Enter valid marks");
    }
}
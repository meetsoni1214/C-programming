#include<stdio.h>
void main() {
    int rno[20];
    int marks[20];
    for (int i = 0; i < 20; i++)
    {   
        printf("Enter the rno of student no. %d : ", i + 1);
        scanf("%d", &rno[i]);
        printf("Enter the marks of student no. %d : ", i + 1);
        scanf("%d", &marks[i]);
    }
    
}
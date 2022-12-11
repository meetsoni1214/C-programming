#include<stdio.h>
void main () {
    for(int i = 0; i < 5; i++) {
        printf("Enter the data for Student no. %d \n", i + 1);
        int marks;
        int sum = 0;
        for(int j = 0; j < 3; j++) {
            printf("Enter the marks of Subject no. %d  ", j + 1);
            scanf("%d", &marks);
            sum += marks;
        }
        printf("The sum of marks is : %d \n", sum);
        printf("The average of marks is : %f \n", ((float) sum / 3));
    }
}
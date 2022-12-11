#include<stdio.h>
void main () {
    int n, nn;
    int sum = 0;
    printf("Enter the number of numbers to do sum and average of it : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number : ");
        scanf("%d", &nn);
        sum += nn;
    }

    printf("The total sum is : %d \n", sum);
    printf("The average is : %f", (float) sum / n);
    
}
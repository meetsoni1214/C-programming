#include<stdio.h>
void main () {
    int counth = 0;
    int countw = 0;
    for(int i = 0; i < 5; i++) {
        int height = 0;
        int weight = 0;
        printf("Enter the height for Student no. %d \n", i + 1);
        scanf("%d", &height);
        printf("Enter the weight for Student no. %d \n", i + 1);
        scanf("%d", &weight);
        if (height > 170) {
            counth++;
        }
        if (weight < 50) {
            countw++;
        }
       
    }
     printf("The number of students who have height more than 170 is : %d \n", counth);
        printf("The number of students who have weight less than 50 is : %d \n", countw);
}
#include<stdio.h>
void main () {
    int arr[] = {-9, 89,10, 0};
    int max = arr[0];
    for (int i = 1; i < 4; i++)
    {
        max = (max < arr[i]) ? arr[i] : max;
    }
    printf("The maximum no. from the array is %d", max);
}
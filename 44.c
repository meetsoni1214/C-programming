#include<stdio.h>
void swap (int arr[], int first, int second) {
    int temp = arr[second];
    arr[second]  = arr[first];
    arr[first] = temp;
}

void main () {
    int arr[] = {1,2,3,4,5,5};
    //used to swap the value in array at first and second index
    printf("%d\n", arr[3]);
    swap(arr, 3, 5);
    printf("%d", arr[3]);
}
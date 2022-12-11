#include<stdio.h>
void bubblesort (int arr[], int n) {
        
        while(n != 1) {
            for (int j = 1; j < n; j++)
        {
            if (arr[j - 1] > arr[j]) {
                swap(arr, j - 1, j);
            }
        }
        n--;
        }
        
        
    }
    void swap (int arr[], int first, int second) {
        int temp = arr[second];
        arr[second] = arr[first];
        arr[first] = temp;
    }
void main () {
    int arr[] = {10,1,2,3,4,-5};
    bubblesort(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%d  ", arr[i]);
    }
    
}

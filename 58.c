#include<stdio.h>
void bubblesort(int *arr, int n) {
    int count = n - 1;
    while(count > 0) {
        for (int i = 0; i < count; i++)
        {
            if (*(arr + i) > *(arr + i + 1)){
                swap(arr + i, arr + i + 1);
            }
        }
        count--;
    }
}
void swap(int *p1, int *p2) {
    int temp = *p2;
    *p2 = *p1;
    *p1 = temp;
}
void main () {
    int arr[] = {1};
    bubblesort(arr, 1);
    for (int i = 0; i < 1; i++)
    {
        printf("%d  ", arr[i]);
    }
    
}
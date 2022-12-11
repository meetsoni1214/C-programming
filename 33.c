#include<stdio.h>
void main () {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int ceven, codd;
    codd = ceven = 0;
    for (int i = 0; i < 10; i++)
    {
        if ((arr[i] & 1) == 1) {
            codd++;
        }else{
            ceven++;
        }
    }
    printf("The total no. of odd numbers in array is %d\n", codd);
    printf("The total no. of even numbers in array is %d", ceven);
}
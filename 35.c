#include<stdio.h>
#include<math.h>
void main () {
    
    int arr[] = {1,2,3};
    int n = 3;
    double sum, prod, div;
    sum = 0;
    prod = 1;
    div = 0;
    double avg, hmean, gmean;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        prod *= arr[i];
        div = div +  (double) 1 / (double) arr[i];
    }
    double nn = (double) 1 / (double) n;
    avg = sum / (double) n;
    gmean = pow(prod, nn);
    hmean = (double) n / div;
    printf("The average of values is : %lf \n", avg);
    printf("The geometric mean of values is : %lf \n", gmean);
    printf("The harmonic mean of values is : %lf \n", hmean);
}
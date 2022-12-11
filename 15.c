#include<stdio.h>
#include<math.h>
#include<limits.h>
void main () {
    int i;
    int value;
    int maxvalue = INT_MIN;
    int minvalue = INT_MAX;

    printf("Enter numbers one by one \n" );
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &value);
        maxvalue  = value > maxvalue ? value : maxvalue;
        minvalue  = value < minvalue ? value : minvalue;
    }
    printf("The maximum value is : %d \n", maxvalue);
    printf("The minimum value is : %d \n", minvalue);
    
}
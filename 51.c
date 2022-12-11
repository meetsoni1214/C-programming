#include<stdio.h>

struct time_struct
{
    int hour;
    int min;
    int sec;
};
void main () {
    struct time_struct Time;
    printf("Enter the hour : ");
    scanf("%d", &Time.hour);
    printf("Enter the min : ");
    scanf("%d", &Time.min);
    printf("Enter the second : ");
    scanf("%d", &Time.sec);

    struct time_struct *ptr;
    ptr = &Time;
    printf("Time is %d:%d:%d", ptr->hour, ptr->min, ptr-> sec);
    
}

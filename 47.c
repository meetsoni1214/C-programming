#include<stdio.h>

int num = 89;

static void change () {
    static int n = 90;
    n++;
    num = 20;
    printf("%d\n", n); 
}
void main () {
    printf("%d\n", num); 
    int n = 5;
    num = 78;
    printf("%d\n", num); 
    change();
    change();
    printf("%d\n", num); 
    printf("%d\n", n); 
}
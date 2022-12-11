#include<stdio.h> 
void main () {
    FILE *fptr;
    FILE *fptrodd;
    FILE *fptreven;
    fptr = fopen("test.txt", "r");
    fptrodd = fopen("odd.txt", "w");
    fptreven = fopen("even.txt", "w");
    int n = getw(fptr);
    while (n != EOF)
    {
        if ((n % 2) != 0) {
            putw(n, fptrodd);
        }else{
            putw(n, fptreven);
        }
        n = getw(fptr);
    }
    
    
    fclose(fptr);
    fclose(fptreven);
    fclose(fptrodd);
    // fptrodd = fopen("odd.txt", "r");
    // fptreven = fopen("even.txt", "r");
    // int b;
    // fscanf(fptreven, "%d", &b);
    // printf("even no. are %d  ",  b);
    // fscanf(fptreven, "%d", &b);
    // printf("%d\n",  b);
    // int c;
    // fscanf(fptrodd, "%d", &c);
    // printf("odd no. are %d  ",  c);
    
}
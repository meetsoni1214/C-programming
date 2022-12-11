#include<stdio.h>
void main () {
    FILE *fptr;
    fptr = fopen("test.txt", "w");
    char str[100] = "Meet";
    fprintf(fptr, "%s", str);
    fclose(fptr);
}
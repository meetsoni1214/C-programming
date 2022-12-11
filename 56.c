#include<stdio.h>
void main() {
    char ch = 'm';
    char *ptr = &ch;
    printf("The address of %c is %u\n", ch, ptr);
    char str[100] = "Meet";
    char *ptrstr = &str[0];
    printf("The address of %c is %u", str[0], ptrstr);

}
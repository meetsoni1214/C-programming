#include<stdio.h> 
#include<string.h>
void convertUpperCase (char str[]) {
    strupr(str);
    printf("The modified String is %s\n", str);
}
void main () {
    char str[100] = "Meet have a millionaire mind";
    convertUpperCase(str);
    
}
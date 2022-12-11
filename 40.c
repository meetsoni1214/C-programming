#include<stdio.h>
#include<string.h>
void reverse (char str[]) {
    int s = 0;
    int e = strlen(str) - 1;
    while(s < e) {
        int temp = str[e];
        str[e] = str[s];
        str[s] = temp;
        s++;
        e--;
    }
    printf("The reversed String is %s", str);
}
void main () {
    char str[100] = "meetsoni";
    reverse(str);

}
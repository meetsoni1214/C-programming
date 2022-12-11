#include<stdio.h>
#include<string.h>
void main() {
    char str[100];
    gets(str);
    char oldstr[100];
    strcpy(oldstr, str);
    // we are replacing m with j
    for(int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'm') {
            str[i] = 'j';
        }
    }
    printf("%s is replaced with %s", oldstr , str);
}
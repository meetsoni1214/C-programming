#include<stdio.h>
void find (char str[], char ch) {
    for (int i = 0;  str[i] != '\0'; i++)
    {
        if (str[i] == ch) {
            printf("The character %c is present in String", ch);
            return;
        }
    }
    printf("The character %c is not present in String", ch);
}
void main () {
    char str[100] = "I am the best coder";
    find(str, 'q');

}
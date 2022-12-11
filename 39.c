#include<stdio.h>
void delete (char str[], char ch) {
    int j = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            str[i] = str[i + 1];
            j = i + 1;
        }else {
            str[i] = str[j];
        }
        j++;
    }
    printf("The modified String is %s", str);
}
void main () {
    char str[100] = "met";
    delete(str, 'e');

}
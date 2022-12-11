#include<stdio.h>
void first();
void second();
void third();
void main () {
    // second();
    third();
}
void first() {
for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
void second() {
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            printf(" ");
        }
        for(int j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
}
void third() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 0; j < 5 - i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

}
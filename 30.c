#include<stdio.h>
void first();
void second();
void third();
void fourth();
void main () {
    // first();
    // second();
    // third();
    fourth();
}
void first() {
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    
}
void second() {
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5 - i + 1; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    
}
void third() {
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 0; j < 5 - i + 1; j++) {
            printf("%d", 5 - i + 1);
        }
        printf("\n");
    }
}
void fourth() {
 for (int i = 1; i <= 5; i++)
    {
        for(int j = 0; j < i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }   
}
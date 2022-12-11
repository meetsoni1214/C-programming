#include<stdio.h>
void first();
void second();
void main () {
    // first();
    // second();
    // third();
    // fourth();
    for(int i = 1; i <= 3; i++ ){
        for(int j = 0; j < 3 - i; j++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    
}
void first() {
    char ch = 'A';
    for(int i = 1; i <= 5; i++) {
        for(int j = 0; j < 5 - i + 1; j++) {
            printf("%c", ch + i - 1);
        }
        printf("\n");
    }
}
void second() {
    char ch = 'A';
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5 - i + 1; j++) {
            printf("%c", ch + j - 1);
        }
        printf("\n");
    }
}
void third() {
    
    for(int i = 1; i <= 4; i++) {
        int n = 1;
        for(int j = 1; j <= i; j++) {
            printf("%d", n);
            printf("%d ", n);
            n+= 2;
        }
        printf("\n");
        
    }
}
void fourth () {
    for(int i = 1; i <= 7; i++) {
        int r = i > 4 ? 4 - (i % 4) : i;
        int p = 7 - (2 * r);
        int last = 0;

        for(int j = 1; j <= r; j++) {
            printf("%d", j);
            last = j;
        }
        if (r == 4) {
            last--;
            r--;
        }
        for(int j = 0; j < p; j++) {
            printf(" ");
        }
        for(int j = 1; j <= r; j++) {
            printf("%d", last);
            last--;
        }
        printf("\n");
    }
}
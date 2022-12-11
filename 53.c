#include<stdio.h>
typedef struct studentdata
{
    char name[100];
    char Branch[100];
    int marks;
}data ;

void main () {
    data d;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the name : ");
        scanf("%s", &d.name);
        printf("Enter the Branch : ");
        scanf("%s", &d.Branch);
        printf("Enter the marks : ");
        scanf("%d", &d.marks);

        printf("%s in %s branch has obtained %d marks\n", d.name, d.Branch, d.marks);
    }
    
}

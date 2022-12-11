#include<stdio.h>
struct personal
{
    char name[100];
    char date[100];
    struct info
    {
        char gender[100];
        char DOB[100];
    }i;
    
    int salary;
};
void main () {

    struct personal employees[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Enter the name : ");
    //     scanf("%s", employees[i].name);
    //     printf("Enter the date of joining : ");
    //     scanf("%s", employees[i].date);
    //     printf("Enter the salary : ");
    //     scanf("%d", &employees[i].salary);
        
    //     printf("%s has joined on %s with a salary of %d\n", employees[i].name, employees[i].date, employees[i].salary);
    // }
    strcpy(employees[1].i.gender, "male");
    printf("%s", employees[1].i.gender);
}


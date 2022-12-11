#include<stdio.h>
#include<string.h>
struct colldata
{
    char college[100];
    char Branch[100];
};

struct student
{
    int rno;
    char name[100];
    float cpi;
    struct colldata collegedata;
};

void main () {
    struct student s1;
    strcpy(s1.collegedata.college, "LDCE\n");
    printf("%s", s1.collegedata.college);
    printf("Enter the name of student : ");
    scanf("%s", &s1.name);
    printf("Enter the rollno. of student : ");
    scanf("%d", &s1.rno);
    printf("Enter the cpi of student : ");
    scanf("%f", &s1.cpi);
    printf("%s whose rollno. is %d has obtained %f cpi", s1.name, s1.rno, s1.cpi);
}

#include<stdio.h>
struct cricket
{
    char playername[100];
    char teamname[100];
    float avg;
};
void main() {
    struct cricket data[50];
    for (int i = 0; i < 50; i++)
    {
        printf("Enter the name of player : ");
        scanf("%s", &data[i].playername);
        printf("Enter the team of player : ");
        scanf("%s", &data[i].teamname);
        printf("Enter the batting avg of player : ");
        scanf("%f", &data[i].avg);
    }
    for (int i = 0; i < 50; i++)
    {
        printf("The team players of RCB are : \n");
        if (data[i].teamname == "RCB") {
            printf("%s with batting avg %f", data[i].playername, data[i].avg);
        }
        
    }
    for (int i = 0; i < 50; i++)
    {
        printf("The team players of MI are : \n");
        if (data[i].teamname == "MI") {
            printf("%s with batting avg %f", data[i].playername, data[i].avg);
        }
        
    }
    for (int i = 0; i < 50; i++)
    {
        printf("The team players of CSK are : \n");
        if (data[i].teamname == "CSK") {
            printf("%s with batting avg %f", data[i].playername, data[i].avg);
        }
        
    }
    for (int i = 0; i < 50; i++)
    {
        printf("The team players of GT are : \n");
        if (data[i].teamname == "GT") {
            printf("%s with batting avg %f", data[i].playername, data[i].avg);
        }
        
    }
    for (int i = 0; i < 50; i++)
    {
        printf("The team players of RR are : \n");
        if (data[i].teamname == "RR") {
            printf("%s with batting avg %f", data[i].playername, data[i].avg);
        }
        
    }
    
    
}

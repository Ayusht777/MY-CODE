// BASIC-OF-STRUCTURES-07.c
// Dynamic memory allocation of structs
/*
Sometimes, the number of struct variables you declared may be insufficient.
 You may need to allocate memory during run-time.
 Here's how you can achieve this in C programming.
*/
// syntax ptr = (struct name*)calloc(n,sizeof(struct name));
// ptr shpuld be structure pointer
#include <stdio.h>
#include<stdlib.h>
struct data
{
    char name[100];
    int age;
};
int main()
{ 
    // only we requires struture pointer
    struct data *p;
    int i, n;
    printf("\nENTER THE SIZE OF STRUCTURE:");
    scanf("%d", &n);
    p = (struct data *)calloc(n, sizeof(struct data));
    if (n < 0 || p == NULL)
    {
        printf("\nSTUCTURE DOESNOT CREATED");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            printf("\nENTER THE INFO FOR %d STRUCTER", i + 1);
            printf("\nENTER THE NAME:");
            scanf("%s",(p+i)->name);
            // their is issue when you type your name with space it will get split adn store in 2
            printf("\nENTER THE AGE:");
            scanf("%d", &(p + i)->age);
        }
        for (i = 0; i < n; i++)
        {
            printf("\n");
            printf("\n%d\t\t%s\t\t%d",i+1,(p+i)->name,(p+i)->age);
        }
        free(p);
        
    }
}
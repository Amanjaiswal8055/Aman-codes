#include <stdio.h>
#include <string.h>

#define a = 10;

typedef struct Instituteofengineeringstudents
{
    char studentname[20];
    int rollno;
} ies;

int main()
{
    ies cse[10];
    ies csit[10];
    ies aiml[10];

    // CSE students
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter the name of CSE student %d\n", i);
        scanf("%s", cse[i - 1].studentname);
        cse[i].rollno = i;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The details of cse students is : %d %s\n", cse[i + 1].rollno, cse[i].studentname);
    }
    // CSIT students
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter the name of CSIT student %d\n", i);
        scanf("%s", csit[i - 1].studentname);
        csit[i].rollno = i;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The details of csit students is : %d %s\n", csit[i + 1].rollno, csit[i].studentname);
    }

    // AIML students

    for (int i = 1; i <= 10; i++)
    {
        printf("Enter the name of AIML student %d\n", i);
        scanf("%s", aiml[i - 1].studentname);
        aiml[i].rollno = i;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The details of aiml students is : %d %s\n", aiml[i + 1].rollno, aiml[i].studentname);
    }
    return 0;
}
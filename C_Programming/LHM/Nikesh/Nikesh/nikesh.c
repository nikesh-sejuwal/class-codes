#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "calendar.h"
// bashenm circle and ellipse
struct employe
{
    char id[100];
    char name[100];
    char dob[100];
    char phone[100];
    char email[100];
    char password[100];
    char type[100];
    int leaves;
    long int doj;
};

int login(char *n, char *p)
{
    FILE *fp;
    struct employe e;
    fp = fopen("user.txt", "r");
    if (fp == NULL)
    {
        printf("Error in opening file\n");
        exit(0);
    }
    while (fscanf(fp, "%s %s %s %s %s %s %s %d %ld", e.id, e.name, e.dob, e.phone, e.email, e.password, e.type, &e.leaves, &e.doj) != EOF)
    {
        // print username and password from the file and given password and username are compared
        printf("Enter name:\t");
        scanf("%s", n);
        fflush(stdin);
        printf("Enter password:\t");
        scanf("%s", p);
        fflush(stdin);
        if (strcmp(n, e.name) == 0 && strcmp(p, e.password) == 0)
        {
            fclose(fp);
            printf("LOGIN SUCESSFULLY\n");
            // return 1 if the user is admin , 2 if the user is manager , 3 if the user is employee
            if (strcmp(e.type, "admin") == 0)
                printf("admin");
            else if (strcmp(e.type, "manager") == 0)
                printf("manager");
            else
                printf("nobody");
        }
    }
    fclose(fp);
    return 0;
}

void addEmployee(struct employe b)
{
    FILE *fp;
    struct employe e;
    int k;
    fp = fopen("user.txt", "r+");
    if (fp == NULL)
    {
        printf("File Not Found/ERROR!\n");
        exit(0);
    }
    while (fscanf(fp, "%s %s %s %s %s %s %s %d %ld", e.id, e.name, e.dob, e.phone, e.email, e.password, e.type, &e.leaves, &e.doj) != EOF)
    {
        if (strcmp(e.id, b.id) == 0)
        {
            printf("Employee is already registered.\n");
            fclose(fp);
            return;
        }
    }

    long int time_epoch = time(NULL);
    b.doj = time_epoch;
    fprintf(fp, "%s %s %s %s %s %s %s %d %ld\n", b.id, b.name, b.dob, b.phone, b.email, b.password, b.type, b.leaves, b.doj);
    fclose(fp);
    printf("Employee Added Successfully\n");
    printf("Your Employee ID is %s\n", b.id);
    printf("Press Any Key To Continue");
}

void employeeAddPrompt()
{
    printf("EMPLOYEE ADD SCREEN\n");
    struct employe e;
    long int time_epoch = time(NULL);
    e.doj = time_epoch;
    e.leaves = 5;
    printf("Enter Employee ID:\t");
    scanf("%s", e.id);
    printf("Enter NAME:\t");
    scanf("%s", e.name);
    printf("Enter DOB:\t");
    scanf("%s", e.dob);
    printf("Enter PHONE:\t");
    scanf("%s", e.phone);
    printf("Enter EMAIL:\t");
    scanf("%s", e.email);
    printf("Enter PASSWORD:\t");
    scanf("%s", e.password);
    printf("Enter TYPE:\t");
    scanf("%s", e.type);
    addEmployee(e);
}

int main()
{
    char name[50];
    char password[50];
    employeeAddPrompt();
    // login(name, password);
    int year = 2022;

    // Function Call
    // printCalendar(year);
    return 0;
}
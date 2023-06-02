//Write a program to solve Exercise No.7 with RitikCoder.
#include"stdio.h"
#include"conio.h"

//here I have created a sturcute.
typedef struct driverDetails{
    char name[30], dlNo[50], route[50];
    int kms;
}dD;

int main(){
    printf("Solution of Exercise No.7 in C programming\n");
    /*Write a program to manage a travel agency and you want your drivers to input their following details:
        1. Name
        2. Driver license No.
        3. Route
        4. Kms
    Let's code to solve this Exercise No.7 in C programming.
    */
    //Code to be solve Exercise no. 7 in C programming.
    dD driver1, driver2, driver3;
    printf("Enter the information of Driver 1.\n");
    printf("Enter first driver name : ");
    gets(driver1.name);
    printf("Enter first driver dlNo : ");
    scanf("%s", &driver1.dlNo);
    printf("Enter first driver route : ");
    scanf("%s", &driver1.route);
    printf("Enter first driver kms : ");
    scanf("%d", &driver1.kms);

    printf("\nEnter the information of Driver 2.\n");
    printf("Enter second driver name : ");
    scanf("%s", &driver2.name);
    printf("Enter second driver dlNo : ");
    scanf("%s", &driver2.dlNo);
    printf("Enter second driver route : ");
    scanf("%s", &driver2.route);
    printf("Enter second driver kms : ");
    scanf("%d", &driver2.kms);

    printf("\nEnter the information of Driver 3.\n");
    printf("Enter third driver name : ");
    scanf("%s", &driver3.name);
    printf("Enter third driver dlNo : ");
    scanf("%s", &driver3.dlNo);
    printf("Enter third driver route : ");
    scanf("%s", &driver3.route);
    printf("Enter third driver kms : ");
    scanf("%d", &driver3.kms);

    //print the details of all drivers.
    printf("\n*****This is the first driver details*****\n");
    printf("   name of first driver is : %s\n", driver1.name);
    printf("   dlNo of first driver is : %s\n", driver1.dlNo);
    printf("   route of first driver is : %s\n", driver1.route);
    printf("   kms of first driver is : %d\n", driver1.kms);

    printf("\n*****This is the second driver details*****\n");
    printf("   name of second driver is : %s\n", driver2.name);
    printf("   dlNo of second driver is : %s\n", driver2.dlNo);
    printf("   route of second driver is : %s\n", driver2.route);
    printf("   kms of second driver is : %d\n", driver2.kms);

    printf("\n*****This is the third driver details*****\n");
    printf("   name of third driver is : %s\n", driver3.name);
    printf("   dlNo of third driver is : %s\n", driver3.dlNo);
    printf("   route of third driver is : %s\n", driver3.route);
    printf("   kms of third driver is : %d\n", driver3.kms);

    //that's all about Exercise- 7.

    //getch();
    return(0);
}
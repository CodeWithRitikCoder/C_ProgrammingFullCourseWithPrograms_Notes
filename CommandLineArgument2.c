//Write a program to create Calulater usig Command line arguments with RitikCoder.
#include"stdio.h"
#include"conio.h"
#include"string.h"
int main(int argc, char const *argv[])
{
    printf("The value of argc is : %d\n", argc);
    char * operation;
    int num1, num2;
    operation= argv[1];
    num1= atoi(argv[2]);
    num2= atoi(argv[3]);
    printf("Operation is %s\n", operation);
    printf("Num1 is %d\n", num1);
    printf("Num3 is %d\n", num2);
    if(strcmp(operation, "Addition")== 0){
        printf("Addition is : %d\n", num1+ num2);
    }else if(strcmp(operation, "Subtraction")== 0){
        printf("Addition is : %d\n", num1- num2);
    }else if(strcmp(operation, "Multiply")== 0){
        printf("Addition is : %d\n", num1* num2);
    }else if(strcmp(operation, "Division")== 0){
        printf("Addition is : %d\n", num1/ num2);
    }else {
        printf("Nothing is't match");
    }

    getch();
    return 0;
}

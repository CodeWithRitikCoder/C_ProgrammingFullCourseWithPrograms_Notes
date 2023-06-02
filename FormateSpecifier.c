//Write a program to Formate specifier in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("Formate specifier in C programming\n");
    /*Formate specifiers is a way to tell the compiler what type of data is in a variable during taking input displaying output to 
    the user.
    These are the formate specifiers in C.
    %d -> it is used to int type of data.
    %f -> it is used to float type of data.
    %c -> it is used to char type of data.
    %s -> it is used to string type of data.
    %p -> it is used to pointer type of data.
    %l -> it is used to long type of data.
    %lf -> it is used to double type of data.
    %Lf -> it is used to long double type of data.
    */
    int a= 8;
    float b= 5.33;
    printf("1. The value of A is : %d\n", a);
    printf("2(i). The value of B is : %f\n", b);
    printf("2(ii). The value of B is : %0.2f\n", b);

    
    //getch();
    return(0);
}
//Write a program to Call a function by value in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int fun1(int);//function declaration.
int main(){
    printf("Call a function by value in C programming\n");
    int a= 4;
    int b= fun1(a);
    //Let's see to print the value of A is this change or not.
    printf("The value of A after call a function is : %d\n", a);
    //No the value of a never the change if we call a function by the value.

    //getch();
    return(0);
}
//function definition.
int fun1(int a){
    a= a+ 3;
    return (a);
}
//Write a program to Create External veriable using Exten keyword in C with RitikCoder.
#include"stdio.h"
#include"conio.h"

void fun1(){
    extern int a;
    printf("The value of a is : %d", a);
}
int a= 10;
int main(){
    printf("Extern keyword in C programming\n");
    fun1();
    
    //getch();
    return(0);
}
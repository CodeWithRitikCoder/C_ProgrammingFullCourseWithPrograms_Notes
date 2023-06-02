//Write a program to Create static variable using static keyword with RitikCoder.
#include"stdio.h"
#include"conio.h"

void fun1(){
    static int a= 1;
    a++;
    printf("The value of a is : %d\n", a);
}
int main(){
    printf("Static keyword in C programming\n");
    fun1();
    fun1();
    fun1();
    
    //getch();
    return(0);
}
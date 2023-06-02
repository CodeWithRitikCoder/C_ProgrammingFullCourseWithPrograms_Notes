//Write a program to ------------ with RitikCoder.
#include"stdio.h"
#include"conio.h"
int sum;
void fun1(){
    extern int sum;
    sum= 20+ 10;
    printf("The sum is : %d\n", sum);
}
int main(){
    printf("Simple sinppit for C programming\n");
    printf("The value of sum is : %d\n", sum);
    fun1();
    
    //getch();
    return(0);
}
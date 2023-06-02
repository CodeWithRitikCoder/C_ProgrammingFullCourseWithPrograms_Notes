//Write a program to Call a function by reference in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
void fun1(int*);//function prototype.
int main(){
    printf("Call a function by reference in C programming\n");
    int a= 4;
    printf("The value of A before call a function is : %d\n", a);
    fun1(&a);
    //Let's see to print the value of A is this change or not.
    printf("The value of A after call a function is : %d\n", a);
    //Yes the value of a will be change if we call a function by the reference.
    
    //getch();
    return(0);
}
//function definition.
void fun1(int *a){
    *a= *a+ 4;
}
//Write a program to know about Pointers in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("Pointer in C programming\n");
    /*What is Pointer in C programming.
    * Pointer is a variable that contains address of a variable in C programming.
    * Creation of pointer in C -> data_type * Pointer_Name;*/    

    int a= 10, *ptr;
    ptr= &a;
    printf("The address of A using &a is : %x\n", &a);
    printf("The address of A using ptr is : %x\n", ptr);
    printf("The value of A using a is : %d\n", a);
    printf("The value of A using *ptr is : %d\n", *ptr);
    
    //getch();
    return(0);
}
//Write a program to Wild Pointer in C with RitikCoder.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("Wild Pointer in C programming\n");
    /*What is Wild Pointer in C programming ?
        *-> Uninitialized pointer are known as wild pointers.
        *-> These pointers point to some arbitrary location in memory and may cause a program to crash or behave badly.
        *-> Dereferencing wild pointers can cause nasty bugs.
        *-> It is suggested to always initialize unused pointers to NULL.
    Let's code some code to know all about wild pointer. in C programming.
    */
    int a= 23; 
    int *ptr; //this is a wild pointer here.
    *ptr= 32;// this is not a good thing to do.
    ptr= &a; //ptr is no longer a wild pointer.
    printf("The value of a is : %d\n", *ptr);
    
    //getch();
    return(0);
}
//Write a program to Use Static variables in C with RitikCoder.
#include"stdio.h"
#include"conio.h"

//function is here.
int fun_Static(int a){
    static int myvar= 0;
    //if we will not initialized static variable this will initialized automatically with the 0.
    //like this- static int myvar;// if we will print this variable this will print 0
    printf("The value of myvar is : %d\n", myvar);
    myvar+= 1;
    return (a+ myvar);
}

int main(){
    printf("Static variable in C programming\n");
    /*What is Static kwyword in C programming.
        *-> Static variables are variables which have a property of preserving their values even when they go out of scope.
        *-> They preserve their value from the previous scope and are not initialized again.
        *-> Static variables remains in memory thoughout the span of the program.
        *-> Static variables are initialized to 0 if not initialized explicitly.
        *-> In C, static vairalbes can only be initiatlized using constant literals.
            *-> that means if we will do like this - static int b= fun(); if we will initialized static variables by calling a function then  this will though an error because static variables are allocate it's memory befor run the program.becuse static variable wants to constant literal.
    Syntax to create static variable.
        *-> like this - static data_type Variable_name= value;
    Initialization of a static vairalble.
        *-> //if we will not initialized static variable this will initialized automatically with the 0.
        *-. like this- static int myvar; // if we will print this variable this will print 0
    Let's code to know all about static variables.
    */
    int a= 5;
    int val= fun_Static(a);
    val= fun_Static(a);
    val= fun_Static(a);
    val= fun_Static(a);
    val= fun_Static(a);
    
    //getch();
    return(0);
}
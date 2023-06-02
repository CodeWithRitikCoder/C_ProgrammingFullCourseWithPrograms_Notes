//Write a program to Use Local and Global variable with it's Scope in C with RitikCoder.
#include"stdio.h"
#include"conio.h"

//here this the Global variable.
int b= 20;//We can access this variable thoughout the program - because of Global declaration.
int main(){
    printf("Scope, Local and Global variable in C programming\n");
    /*What is Scope in C programming.
        *-> Scope is a region of the program where a defined variable can exist and beyond which it cannot be accessed.
    What is local variables.
        *-> Variables which are accessed inside a function ar a block are called local variables.
        *-> They can only be accessed by the function they are declared in!
        *-> They are inaccessible to the functions outside the function they are declared in!
    What is Global variables.
        *-> These are the variables defined outside the main method.
        *-> Global variables are accessible thorughout the entire program from any function.
        *-> If a local and global variable has the same name, the local variable will take preference.
            *-> C progams gives fist preference to local varialbes if local and global variables name are same.
    Let's code some code to know all about scope, local and global variables.
    */
    int a= 5;
    printf("Ther value of a is : %d\n", a);//if we will access this variable outside of this main function then this will through an error.
    printf("Ther value of b is : %d\n", b);//
    
    //getch();
    return(0);
}